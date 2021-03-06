/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:19:59 by creyt             #+#    #+#             */
/*   Updated: 2022/05/19 17:31:19 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_stack *stack)
{
	int	i;

	i = stack->size_a + 1;
	if (stack->size_b == 0)
		return ;
	if (stack->size_a == 0)
		stack->stack_a[0] = stack->stack_b[0];
	if (stack->size_a > 0)
	{
		while (--i > 0)
			stack->stack_a[i] = stack->stack_a[i - 1];
		stack->stack_a[0] = stack->stack_b[0];
	}
	i = -1;
	while (++i < stack->size_b)
		stack->stack_b[i] = stack->stack_b[i + 1];
	stack->size_a++;
	stack->size_b--;
	ft_printf("pa\n");
}

void	push_b(t_stack *stack)
{
	int	i;

	i = stack->size_b + 1;
	if (stack->size_a == 0)
		return ;
	if (stack->size_b == 0)
		stack->stack_b[0] = stack->stack_a[0];
	if (stack->size_b > 0)
	{
		while (--i > 0)
			stack->stack_b[i] = stack->stack_b[i - 1];
		stack->stack_b[0] = stack->stack_a[0];
	}
	i = -1;
	while (++i < stack->size_a)
		stack->stack_a[i] = stack->stack_a[i + 1];
	stack->size_a--;
	stack->size_b++;
	ft_printf("pb\n");
}

/*
	l.19 laisse une place en plus pour le decalage
	l.24 tant que i est plus grand que 0, on decale contre le haut
	l.30 on met -1 car la ligne du dessous on met ++i car on ne peut pas
	mettre i++ sur cette ligne. permet ainsi d'economiser les lignes
	l.32 Vu qu'on a push le premier nb de b dans a, on redecale les nb de
	b contre le haut
	l. 33-34 on augmente la taille de a car elle a un nb de + et on decremente b
*/
