/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_instrucs2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqureshi <hqureshi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:58:33 by hqureshi          #+#    #+#             */
/*   Updated: 2022/02/14 17:24:49 by hqureshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	pb(t_node *stack_a, t_node *stack_b)
{
	t_node	*tmp;
	t_node	*to;
	t_node	*from;
	
	to = stack_b;
	from = stack_a;

	tmp = from;
	from = from->next;
	stack_b = from;
	if (!to)
	{
		to = tmp;
		to->next = NULL;
		stack_a = to;
	}
	else
	{
		tmp->next = to;
		stack_a = tmp;
	}
	printlist(stack_a);
	printlist(stack_b);
}
