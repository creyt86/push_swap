/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 15:55:07 by creyt             #+#    #+#             */
/*   Updated: 2022/05/05 14:10:41 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	malloc_your_stack(char **latan, t_stack stack)
{
	int	i;

	stack.size_acher = 0;
	stack.stack_acher = malloc(sizeof(long long int) * (stack.size_acher));
	if (!stack.stack_acher)
		exit (0);
	stack.stack_bloody = malloc(sizeof(long long int) * (stack.size_acher));
	if (!stack.stack_bloody)
		exit (0);
}

void	check_double(t_stack stack)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < stack.size_acher)
	{
		i = j + 1;
		while (i < stack.size_acher)
		{
			if (stack.stack_acher[j] != stack.stack_acher[i])
				i++;
			else
				error_close("error");
		}
		j++;
	}
}

void	check_alpha_or_num(char **str)
{
	int	len;
	int	i;
	int	j;

	i = 0;
	len = 0;
	while (str[len])
		len++;
	while (i < len)
	{
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] == '-' && ft_isdigit(str[i][j + 1]) == 1)
				j++;
			if (str[i][j] >= '0' && str[i][j] <= '9')
				j++;
			else
				error_close("error");
		}
		i++;
	}
}
