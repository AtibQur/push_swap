/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_instructions1.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqureshi <hqureshi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:51:30 by hqureshi          #+#    #+#             */
/*   Updated: 2022/02/24 14:06:28 by hqureshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	sa(t_node *stack_a)
{
	if (stack_a)
	{
		swap(&stack_a->value, &stack_a->next->value);
		swap(&stack_a->index, &stack_a->next->index);
		write(1, "sa\n", 3);
	}
}

void	sb(t_node *stack_b)
{
	if (stack_b)
	{
		swap(&stack_b->value, &stack_b->next->value);
		swap(&stack_b->index, &stack_b->next->index);
		write(1, "sb\n", 3);
	}
}

void	ss(t_node *stack_a, t_node *stack_b)
{
	if (stack_a && stack_b)
	{
		swap(&stack_a->value, &stack_a->next->value);
		swap(&stack_a->index, &stack_a->next->index);
		swap(&stack_b->value, &stack_b->next->value);
		swap(&stack_b->index, &stack_b->next->index);
		write(1, "ss\n", 3);
	}
}
