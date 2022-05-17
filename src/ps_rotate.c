/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:11:00 by creyt             #+#    #+#             */
/*   Updated: 2022/05/14 13:44:58 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_stack *stack)
{
	int	i;
	int	temp;

	i = 0;
	temp = stack->stack_a[0];
	while (i < stack->size_a)
	{
		stack->stack_a[i] = stack->stack_a[i + 1];
		i++;
	}
	stack->stack_a[stack->size_a - 1] = temp;
	/* va a la derniere position de la stack - 1 pour ne pas etre sur le \0*/
	ft_printf("ra\n");
}

void	rotate_b(t_stack *stack)
{
	int	i;
	int	temp;

	i = 0;
	temp = stack->stack_b[0];
	while (i < stack->size_b)
	{
		stack->stack_b[i] = stack->stack_b[i + 1];
		i++;
	}
	stack->stack_b[stack->size_b - 1] = temp;
	ft_printf("rb\n");
}

void	rotate_a_b(t_stack *stack)
{
	int	i;
	int	temp;

	i = -1;
	temp = stack->stack_a[0];
	while (++i < stack->size_a)
		stack->stack_a[i] = stack->stack_a[i + 1];
	stack->stack_a[stack->size_a - 1] = temp;
	temp = stack->stack_b[0];
	i = -1;
	while (++i < stack->size_b)
		stack->stack_b[i] = stack->stack_b[i + 1];
	stack->stack_b[stack->size_b - 1] = temp;
	ft_printf("rr\n");
}

/*
 l. 58 = on lui dit que la case 3 par exemple prend la place de 2.
 2 = 2 + 1
 */
