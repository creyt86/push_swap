/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 14:28:04 by creyt             #+#    #+#             */
/*   Updated: 2022/05/19 13:31:43 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_close(char *str)
{
	ft_printf("\n--------------------------\n\n%s\
	%s\n--------------------------\n\n", ERROR, str);
	exit(EXIT_FAILURE);
}

void	init_my_stack(t_stack *stack)
{
	stack->stack_b = NULL;
	stack->sort_array = NULL;
	stack->stack_abis = NULL;
	stack->size_b = 0;
}

long long int	ft_atol(const char *str)
{
	long long int	neg;
	long long int	res;
	int				i;

	neg = 1;
	res = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * neg);
}
