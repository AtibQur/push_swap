/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqureshi <hqureshi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:58:33 by hqureshi          #+#    #+#             */
/*   Updated: 2022/02/24 14:19:46 by hqureshi         ###   ########.fr       */
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

void	rab(t_node **list)
{
	t_node	*tmp_first;
	t_node	*tmp_last;
	t_node	*stack;

	stack = *list;
	tmp_first = stack;
	stack = stack->next;
	tmp_last = stack;
	while (tmp_last->next != NULL)
	{
		tmp_last = tmp_last->next;
	}
	tmp_last->next = tmp_first;
	tmp_first->next = NULL;
	*list = stack;
}

void	rrab(t_node **list)
{
	t_node	*tmp_last;
	t_node	*tmp_new_last;

	if (list)
	{
		tmp_last = *list;
		while (tmp_last->next)
		{
			if (!tmp_last->next->next)
				tmp_new_last = tmp_last;
			tmp_last = tmp_last->next;
		}
		tmp_new_last->next = NULL;
		tmp_last->next = *list;
		*list = tmp_last;
	}
}
