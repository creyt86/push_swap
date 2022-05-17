/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:47:52 by creyt             #+#    #+#             */
/*   Updated: 2022/05/14 15:59:00 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

}
