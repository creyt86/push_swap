/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_errors.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 15:55:07 by creyt             #+#    #+#             */
/*   Updated: 2022/06/21 15:31:31 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_double(t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < stack->size_a)
	{
		i = j + 1;
		while (i < stack->size_a)
		{
			if (stack->stack_a[j] != stack->stack_a[i])
				i++;
			else
				error_close(ERR_DOB);
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
				error_close(ERR_ALPH);
		}
		i++;
	}
}

void	check_size_int(t_stack *stack)
{
	int	i;

	i = -1;
	while (++i < stack->size_a)
	{
		if (stack->stack_a[i] > 2147483647 || stack->stack_a[i] < -2147483648)
			error_close(ERR_SIZE);
	}
}

void	free_array(char **argv, t_stack *stack)
{
	char	**array;
	int		x;

	x = -1;
	array = ft_split(argv[1], ' ');
	malloc_your_stacks(array, stack);
	check_alpha_or_num(array);
	check_double(stack);
	check_size_int(stack);
	while (array[++x])
		free(array[x]);
	free(array);
}

int	check_errors(int argc, char **argv, t_stack *stack)
{
	if (argc < 2)
	{
		free(stack);
		close_no_arg(stack);
	}
	if (argc == 2)
		free_array(argv, stack);
	else if (argc >= 2)
	{
		malloc_your_stacks(argv + 1, stack);
		check_alpha_or_num(argv + 1);
		check_double(stack);
		check_size_int(stack);
	}
	return (0);
}
