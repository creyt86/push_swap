/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:47:52 by creyt             #+#    #+#             */
/*   Updated: 2022/05/24 15:53:27 by creyt            ###   ########.fr       */
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

void	sort_one(t_stack *stack)
{
	if (stack->stack_a[1] > stack->stack_a[2])
	{
		reverse_a(stack);
		swap_a(stack);
	}
}

void	sort_two(t_stack *stack)
{
	if (stack->stack_a[1] < stack->stack_a[2])
		swap_a(stack);
	else if (stack->stack_a[1] > stack->stack_a[2])
		reverse_a(stack);
}

void	sort_three(t_stack *stack)
{
	if (stack->stack_a[1] < stack->stack_a[2])
	{
		reverse_a(stack);
		reverse_a(stack);
	}
	else if (stack->stack_a[1] > stack->stack_a[2])
	{
		rotate_a(stack);
		swap_a(stack);
	}
}

int	sort_algo_three(t_stack *stack)
{
	if (stack->stack_a[0] < stack->stack_a[1]
		&& stack->stack_a[0] < stack->stack_a[2])
		sort_one(stack);
	else if (stack->stack_a[0] > stack->stack_a[1]
		&& stack->stack_a[0] > stack->stack_a[2])
		sort_three(stack);
	else
		sort_two(stack);
	return (0);
}
