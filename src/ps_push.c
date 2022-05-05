/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:19:59 by creyt             #+#    #+#             */
/*   Updated: 2022/05/05 14:10:46 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	push_a(t_stack stack)
{
	int i;

	i = stack.size_acher + 1;
	/*laisse une place en plus pour le decalage*/
	if (stack.size_bloody == 0)
		return ;
	if (stack.size_acher == 0)
		stack.stack_acher[0] = stack.stack_bloody[0];
	if (stack.size_acher > 0)
	{
		/* tant que i est plus grand que 0, on decale contre le haut */
		while(i > 0)
		{
			stack.stack_acher[i] = stack.stack_acher[i - 1];
		}
		stack.stack_acher[0] = stack.stack_bloody[0];
	}
	i = 0;
	while(i < stack.size_bloody)
		stack.stack_acher[0] = stack.stack_bloody[0];

}
