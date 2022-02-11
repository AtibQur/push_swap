/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_instrucs1.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqureshi <hqureshi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:58:33 by hqureshi          #+#    #+#             */
/*   Updated: 2022/02/11 15:58:34 by hqureshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

void	rab(t_node *list)
{
	t_node	*tmp_first;
	t_node	*tmp_last;
	t_node	*stack;

	stack = list;
	tmp_first = stack;
	stack = stack->next;
	tmp_last = stack;
	while (tmp_last->next != NULL)
	{
		tmp_last = tmp_last->next;
	}
	tmp_last->next = tmp_first;
	tmp_first->next = NULL;
	list = stack;
	// printlist(list);
}

void	rrab(t_node *list)
{
	t_node	*tmp_first;
	t_node	*tmp_last;


	if (list)
	{
		tmp_first = list;
		while (tmp_first->next != NULL)
			tmp_first = tmp_first->next;
		tmp_last = list;
		while (tmp_last->next->next != NULL)
			tmp_last = tmp_last->next;
		tmp_last->next = tmp_first;
		
		list = tmp_first;
		printlist(list);
	}
	

}
