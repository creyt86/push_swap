/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:42:21 by creyt             #+#    #+#             */
/*   Updated: 2022/05/12 16:55:56 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort_new_array(t_stack *stack)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < stack->size_a - 1)
	{
		j = i + 1;
		while (j < stack->size_a)
		{
			if (stack->sort_array[i] > stack->sort_array[i])
			{
				temp = stack->sort_array[i];
				stack->sort_array[i] = stack->sort_array[j];
				stack->sort_array[j] = temp;
			}
			j++;
		}
		i++;
	}
	return (0);
}

t_stack	sorted_index(t_stack *stack)
{
	int	i;
	int	j;
	int	newvalue;

	newvalue = 0;
	i = 0;
	stack = sort_new_array(stack);
	while (i < stack->size_a)
	{
		j = 0;
		while (j < stack->size_a)
		{
			if (stack->sort_array[i] == stack->stack_abis[j])
			{
				stack->stack_a[j] = newvalue;
				newvalue++;
			}
			j++;
		}
		i++;
	}
	return (stack);
}

/*
	1ere fonction on trie la stack dans un nouveau tab. 100, -200, 0
	devient -200, 0, 100
	dans la 2e, on compare le nouveau tab avec la copie de
	la stack A et on donne la valeur de la position, on indexe donc,
	qu'on place dans la stack A. -200 prend la pos/valeur 0,
	0 prend la pos/valeur 1 et 100 prend la pos/valeur 2.
*/
