/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:18:00 by creyt             #+#    #+#             */
/*   Updated: 2022/05/05 11:19:08 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	swap_a(t_stack stack)
{
	int	eligent;

	if (stack.size_acher == 0)
		return (stack);
	eligent = stack.stack_acher[0];
	stack.stack_acher[0] = stack.stack_acher[1];
	stack.stack_acher[1] = eligent;
	write(1, "sa\n", 3);
	return (stack);
}

t_stack	swap_b(t_stack stack)
{
	int	eligent;

	if (stack.size_bloody == 0)
		return (stack);
	eligent = stack.stack_bloody[0];
	stack.stack_bloody[0] = stack.stack_bloody[1];
	stack.stack_bloody[1] = eligent;
	write(1, "sb\n", 3);
	return (stack);
}

t_stack swap_a_b(t_stack stack)
{
	int	i;
	int	j;

	if (stack.size_acher == 0 || stack.size_bloody == 0)
		return(stack);
	i = stack.stack_acher[0];
	j = stack.stack_bloody[0];
	stack.stack_acher[0] = stack.stack_acher[1];
	stack.stack_acher[1] = i;
	stack.stack_bloody[0] = stack.stack_bloody[1];
	stack.stack_bloody[1] = j;
	write(1, "ss\n", 3);
	return (stack);
}
