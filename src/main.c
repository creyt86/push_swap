/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 16:46:18 by creyt             #+#    #+#             */
/*   Updated: 2022/05/12 11:39:07 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_close(char *str)
{
	ft_printf("\n--------------------------\n\n%s\
	%s\n--------------------------\n\n", ERROR, str);
	exit(EXIT_FAILURE);
}
/*
int	main(int argc, char **argv)
{
	t_stack	stack;

	stack.stack_a = NULL;
	stack.stack_b = NULL;
	return (0);
}
*/
