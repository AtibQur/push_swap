/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack_function.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqureshi <hqureshi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:09:23 by hqureshi          #+#    #+#             */
/*   Updated: 2022/02/14 18:28:55 by hqureshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	sort_three_args(t_node *stack_a)
{
	int		head;
	int		middle;
	int		tail;

	head = stack_a->value;
	middle = stack_a->next->value;
	tail = stack_a->next->next->value;
	if (head > middle && middle < tail && tail > head)
		sa(stack_a);
	else if (head > middle && middle > tail && tail < head)
	{
		sa(stack_a);
		reverse_rotate_a(stack_a);
	}
	else if (head > middle && middle < tail && tail < head)
		rotate_a(stack_a);
	else if (head < middle && middle > tail && tail > head)
	{
		sa(stack_a);
		rotate_a(stack_a);
	}
	else if (head < middle && middle > tail && head > tail)
		reverse_rotate_a(stack_a);
}

void	sort_five_args(t_node *stack_a, t_node *stack_b)
{
	push_b(stack_a, stack_b);
	pb(stack_a, stack_b);
}
