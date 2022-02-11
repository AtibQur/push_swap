/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack_function.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqureshi <hqureshi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:09:23 by hqureshi          #+#    #+#             */
/*   Updated: 2022/02/11 14:26:48 by hqureshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	sort_three_args(t_node *stack_a)
{
	t_node	*tmp;
	int		head;
	int		middle;
	int		tail;

	if (stack_a)
	{
		tmp = stack_a;
		head = stack_a->value;
		middle = stack_a->next->value;
		tail = stack_a->next->next->value;
		if (head > middle && middle < tail)
			sa(stack_a);
		if (head > middle && middle > tail && tail < head)
		{
			// sa(stack_a);
			reverse_rotate_a(stack_a);
		}
	}
}
