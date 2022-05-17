/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:42:21 by creyt             #+#    #+#             */
/*   Updated: 2022/05/14 13:41:02 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_new_array(t_stack *stack)
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
			if (stack->sort_array[i] > stack->sort_array[j])
			{
				temp = stack->sort_array[i];
				stack->sort_array[i] = stack->sort_array[j];
				stack->sort_array[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int	sorted_index(t_stack *stack)
{
	int	i;
	int	j;
	int	newvalue;

	newvalue = 0;
	i = 0;
	sort_new_array(stack);
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
	return (0);
}

/*
	1ere fonction on trie la stack dans un nouveau tab. 100, -200, 0
	devient -200, 0, 100
	dans la 2e, on compare le nouveau tab avec la copie de
	la stack A et on donne la valeur de la position, on indexe donc,
	qu'on place dans la stack A. -200 prend la pos/valeur 0,
	0 prend la pos/valeur 1 et 100 prend la pos/valeur 2.
*/
