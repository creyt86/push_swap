/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_errors.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 15:55:07 by creyt             #+#    #+#             */
/*   Updated: 2022/05/14 13:35:37 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	malloc_your_stacks(char **tab, t_stack *stack)
{
	int	i;

	stack->size_a = 0;
	while (tab[stack->size_a])
		stack->size_a++;
	stack->stack_a = malloc(sizeof(long long int) * (stack->size_a));
	if (!stack->stack_a)
		exit (0);
	stack->stack_b = malloc(sizeof(long long int) * (stack->size_a));
	if (!stack->stack_b)
		exit (0);
	i = -1;
	stack->sort_array = malloc(sizeof(long long int) * (stack->size_a));
	if (!stack->sort_array)
		exit (0);
	stack->stack_abis = malloc(sizeof(long long int) * (stack->size_a));
	if (stack->stack_abis)
		exit (0);
	while (tab[++i])
	{
		stack->stack_a[i] = ft_atol(tab[i]);
		stack->sort_array[i] = ft_atol(tab[i]);
		stack->stack_abis[i] = ft_atol(tab[i]);
	}
	return (0);
}

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

	i = 0;
	while (i < stack->size_a)
	{
		if (stack->stack_a[i] > 2147483647 || stack->stack_a[i] < -21474836478)
			error_close(ERR_SIZE);
		else
			i++;
	}
}

int	check_errors(int argc, char **argv, t_stack *stack)
{
	char	**array;

	if (argc < 2)
		error_close(ERR_ARG);
	if (argc == 2)
	{
		array = ft_split(argv[1], ' ');
		//stack = malloc_your_stacks(array, stack);
		malloc_your_stacks(array, stack);
		check_alpha_or_num(array);
		check_double(stack);
		check_size_int(stack);
	}
	else if (argc == 2)
	{
		//stack = malloc_your_stacks(argv + 1, stack);
		malloc_your_stacks(argv + 1, stack);
		check_alpha_or_num(argv + 1);
		check_double(stack);
		check_size_int(stack);
	}
	return (0);
}
