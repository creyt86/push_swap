/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 08:56:24 by creyt             #+#    #+#             */
/*   Updated: 2022/05/05 14:13:48 by creyt            ###   ########.fr       */
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

typedef struct s_stack
{
	long long int	*stack_acher;
	long long int	*stack_bloody;
	char			**dassaut;
	int				size_acher;
	int				size_bloody;

}	t_stack;

long long int	ft_atol(const char *str);
void			error_close(char *str);

#endif
