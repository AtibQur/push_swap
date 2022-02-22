/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack_function.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqureshi <hqureshi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:09:23 by hqureshi          #+#    #+#             */
/*   Updated: 2022/02/22 15:07:38 by hqureshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	sort_three_args(t_node **stack_a)
{
	t_node	*tmp;
	int		head;
	int		middle;
	int		tail;

	tmp = *stack_a;
	head = tmp->value;
	middle = tmp->next->value;
	tail = tmp->next->next->value;
	if (head > middle && middle < tail && tail > head)
		sa(*stack_a);
	else if (head > middle && middle > tail && tail < head)
	{
		sa(*stack_a);
		reverse_rotate_a(*stack_a);
	}
	else if (head > middle && middle < tail && tail < head)
		rotate_a(*stack_a);
	else if (head < middle && middle > tail && tail > head)
	{
		sa(*stack_a);
		rotate_a(*stack_a);
	}
	else if (head < middle && middle > tail && head > tail)
		reverse_rotate_a(*stack_a);
}

void	sort_five_args(t_node *stack_a, t_node *stack_b)
{
	// get_lowest_num(stack_a);
	pb(&stack_a, &stack_b);
	// printf("stack_a before sort\n");
	// printf("stack_a ---> ");
	// printlist(stack_a);
	// printf("stack_b ---> ");
	// printlist(stack_b);
	// sa(stack_a);
	// printf("stack_a after sort\n");
	// printf("stack_a ---> ");
	// printlist(stack_a);
	// printf("stack_b ---> ");
	// printlist(stack_b);
	// pa(&stack_a, &stack_b);
	// pa(&stack_a, &stack_b);
	// printf("stack_a ---> ");
	// printlist(stack_a);
	// printf("stack_b ---> ");
	// printlist(stack_b);
}
