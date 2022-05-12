/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:18:00 by creyt             #+#    #+#             */
/*   Updated: 2022/05/12 14:03:56 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	swap_a(t_stack stack)
{
	int	tempa;

	if (stack.size_a == 0)
		return (stack);
	tempa = stack.stack_a[0];
	stack.stack_a[0] = stack.stack_a[1];
	stack.stack_a[1] = tempa;
	ft_printf("sa\n");
	return (stack);
}

t_stack	swap_b(t_stack stack)
{
	int	tempb;

	if (stack.size_b == 0)
		return (stack);
	tempb = stack.stack_b[0];
	stack.stack_b[0] = stack.stack_b[1];
	stack.stack_b[1] = tempb;
	ft_printf("sb\n");
	return (stack);
}

t_stack	swap_a_b(t_stack stack)
{
	int	tempa;
	int	tempb;

	if (stack.size_a == 0 || stack.size_b == 0)
		return (stack);
	tempa = stack.stack_a[0];
	tempb = stack.stack_b[0];
	stack.stack_a[0] = stack.stack_a[1];
	stack.stack_a[1] = tempa;
	stack.stack_b[0] = stack.stack_b[1];
	stack.stack_b[1] = tempb;
	ft_printf("ss\n");
	return (stack);
}
