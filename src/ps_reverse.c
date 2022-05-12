/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:22:48 by creyt             #+#    #+#             */
/*   Updated: 2022/05/12 14:02:55 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	reverse_a(t_stack stack)
{
	int	i;
	int	temp;

	i = stack.size_a;
	temp = stack.stack_a[stack.size_a - 1];
	while (i-- > 0)
		stack.stack_a[i] = stack.stack_a[i - 1];
	stack.stack_a[0] = temp;
	ft_printf("rra\n");
	return (stack);
}

t_stack	reverse_b(t_stack stack)
{
	int	i;
	int	temp;

	i = stack.size_b;
	temp = stack.stack_b[stack.size_b - 1];
	while (i-- > 0)
		stack.stack_b[i] = stack.stack_b[i - 1];
	stack.stack_b[0] = temp;
	ft_printf("rrb\n");
	return (stack);
}

t_stack	reverse_a_b(t_stack stack)
{
	int	i;
	int	temp;

	i = stack.size_a;
	temp = stack.stack_a[stack.size_a - 1];
	while (i-- > 0)
		stack.stack_a[i] = stack.stack_a[i - 1];
	stack.stack_a[0] = temp;
	temp = stack.stack_b[stack.size_b - 1];
	while (i-- > 0)
		stack.stack_b[i] = stack.stack_b[i - 1];
	stack.stack_b[0] = temp;
	ft_printf("rrr\n");
	return (stack);
}
