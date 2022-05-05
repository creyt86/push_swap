/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 16:46:18 by creyt             #+#    #+#             */
/*   Updated: 2022/05/05 14:13:05 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_close(char *str)
{
	ft_printf("error\n", str);
	exit (0);
}

int	main(int argc, char **argv)
{
	t_stack	stack;

	stack.stack_acher = NULL;
	stack.stack_bloody = NULL;
	if (argc < 2)
		ft_printf("manque un argument non ?\n");
	else if (argc == 2)
	{
		ft_printf("trouve une fonction qui va changer ta string en int = split");
		stack.dassaut = ft_split(argv[1], ' ');
//		stack.stack_acher = ft_atol(argv[1]);
	}
	else if (argc > 2)
	{
//		stack.stack_acher = ft_atol(argv[1]);
//		printf("%lld\n", stack.stack_acher);
		ft_printf("fonction utilisant atoi = transforme les arguments char en int");
	}
	return (0);
}
