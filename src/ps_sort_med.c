/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort_med.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 10:41:38 by creyt             #+#    #+#             */
/*   Updated: 2022/05/19 13:27:00 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_just_two(t_stack *stack)
{
	if (stack->stack_a[0] > stack->stack_a[1])
		swap_a(stack);
	else
		exit (0);
}

void	sort_four(t_stack *stack)
{
	while (stack->size_b < 1)
	{
		while (stack->stack_a[0] != 3)
			rotate_a(stack);
		push_b(stack);
	}
	sort_algo_three(stack);
	push_a(stack);
	rotate_a(stack);
}

void	sort_five(t_stack *stack)
{
	while (stack->size_b < 2)
	{
		while (stack->stack_a[0] != 3 && stack->stack_a[0] != 4)
			rotate_a(stack);
		push_b(stack);
	}
	sort_algo_three(stack);
	if (stack->stack_b[0] == 3)
	{
		push_a(stack);
		rotate_a(stack);
		push_a(stack);
		rotate_a(stack);
	}
	else
	{
		push_a(stack);
		push_a(stack);
		rotate_a(stack);
		rotate_a(stack);
	}
}
