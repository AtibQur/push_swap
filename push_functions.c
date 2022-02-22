/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqureshi <hqureshi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:58:33 by hqureshi          #+#    #+#             */
/*   Updated: 2022/02/22 17:36:41 by hqureshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	pa(t_node **stack_a, t_node **stack_b)
{
	t_node	*top;

	if (!*stack_b)
		return ;
	top = *stack_b;
	*stack_b = top->next;
	top->next = *stack_a;
	*stack_a = top;
	write(1, "pa\n", 3);
}

void	pb(t_node **stack_a, t_node **stack_b)
{
	t_node	*top;

	if (!*stack_a)
		return ;
	top = *stack_a;
	*stack_a = top->next;
	top->next = *stack_b;
	*stack_b = top;
	write(1, "pb\n", 3);
}
