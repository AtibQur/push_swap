/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqureshi <hqureshi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:09:23 by hqureshi          #+#    #+#             */
/*   Updated: 2022/02/25 11:42:44 by hqureshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	search_lowest_pos(t_node *stack_a, int nb)
{
	t_node	*tmp;
	int		ret;

	ret = 1;
	tmp = stack_a;
	while (tmp)
	{
		if (tmp->index == 0 && nb == 0)
			return (ret);
		if (tmp->index == 1 && nb == 1)
			return (ret);
		tmp = tmp->next;
		ret++;
	}
	return (ret);
}

void	sort_five_args(t_node **stack_a)
{
	t_node	*stack_b;
	int		lowest_pos;

	stack_b = NULL;
	lowest_pos = search_lowest_pos(*stack_a, 0);
	if (lowest_pos == 2)
		sa(*stack_a);
	if (lowest_pos == 3)
	{
		reverse_rotate_a(stack_a);
		reverse_rotate_a(stack_a);
	}
	if (lowest_pos == 4)
		reverse_rotate_a(stack_a);
	if (lowest_pos == 5)
		reverse_rotate_a(stack_a);
	pb(stack_a, &stack_b);
	sort_four_args(stack_a, 1);
	pa(stack_a, &stack_b);
}

void	sort_four_args(t_node **stack_a, int nb)
{
	t_node	*stack_b;
	int		lowest_pos;

	stack_b = NULL;
	lowest_pos = search_lowest_pos(*stack_a, nb);
	if (lowest_pos == 2)
		sa(*stack_a);
	if (lowest_pos == 3)
	{
		reverse_rotate_a(stack_a);
		reverse_rotate_a(stack_a);
	}
	if (lowest_pos == 4)
		reverse_rotate_a(stack_a);
	pb(stack_a, &stack_b);
	sort_three_args(stack_a);
	pa(stack_a, &stack_b);
}

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
		reverse_rotate_a(stack_a);
	}
	else if (head > middle && middle < tail && tail < head)
		rotate_a(stack_a);
	else if (head < middle && middle > tail && tail > head)
	{
		sa(*stack_a);
		rotate_a(stack_a);
	}
	else if (head < middle && middle > tail && head > tail)
		reverse_rotate_a(stack_a);
}

void	sort_small_stack(t_node *stack_a)
{
	int		count;

	// printlist(stack_a);
	count = count_nodes(stack_a);
	if (count == 2)
		sa(stack_a);
	if (count == 3)
		sort_three_args(&stack_a);
	if (count == 4)
		sort_four_args(&stack_a, 0);
	if (count == 5)
		sort_five_args(&stack_a);
	// printlist(stack_a);
}
