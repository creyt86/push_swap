/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:27:33 by creyt             #+#    #+#             */
/*   Updated: 2022/06/21 15:27:35 by creyt            ###   ########.fr       */
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
	if (!stack->stack_abis)
		exit (0);
	while (tab[++i])
	{
		stack->stack_a[i] = ft_atol(tab[i]);
		stack->sort_array[i] = ft_atol(tab[i]);
		stack->stack_abis[i] = ft_atol(tab[i]);
	}
	return (0);
}
