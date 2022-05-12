/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 08:56:24 by creyt             #+#    #+#             */
/*   Updated: 2022/05/12 16:07:10 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

# define ERROR "Error\n"
# define ERR_ARG "Manquerait pas un argument ?\n"
# define ERR_DOB "Y a un double dans la Matrice !\n"
# define ERR_ALPH "Merci de ne pas m'embrouiller avec des lettres !\n"
# define ERR_SIZE "Nombre trop extremiste\n"

typedef struct s_stack
{
	long long int	*stack_a;
	long long int	*stack_b;
	long long int	*sort_array;
	long long int	*stack_abis;
	int				size_a;
	int				size_b;

}	t_stack;

long long int	ft_atol(const char *str);
void			error_close(char *str);
t_stack			check_errors(int argc, char **argv, t_stack stack);
t_stack			push_a(t_stack stack);
t_stack			push_b(t_stack stack);
t_stack			rotate_a(t_stack stack);
t_stack			rotate_b(t_stack stack);
t_stack			rotate_a_b(t_stack stack);
t_stack			sorted_index(t_stack stack);

#endif
