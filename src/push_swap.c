/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:02:34 by creyt             #+#    #+#             */
/*   Updated: 2022/05/19 13:32:40 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	init_my_stack(stack);
	check_errors(argc, argv, stack);
	sorted_index(stack);
	if (!check_sort_stack_a(stack))
	{
		if (stack->size_a == 2)
			sort_just_two(stack);
		else if (stack->size_a == 3)
			sort_algo_three(stack);
		else if (stack->size_a == 4)
			sort_four(stack);
		else if (stack->size_a == 5)
			sort_five(stack);
		else
			sort_algo_max(stack);
	}
	free(stack->stack_a);
	free(stack->stack_b);
	free(stack->sort_array);
	free(stack->stack_abis);
	return (0);
}
