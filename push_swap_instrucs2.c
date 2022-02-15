/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_instrucs2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqureshi <hqureshi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:58:33 by hqureshi          #+#    #+#             */
/*   Updated: 2022/02/15 16:57:36 by hqureshi         ###   ########.fr       */
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
	// printf("stack_a ---> ");
	// printlist(*stack_a);
	// printf("stack_b ---> ");
	// printlist(*stack_b);
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
	// printf("stack_a ---> ");
	// printlist(*stack_a);
	// printf("stack_b ---> ");
	// printlist(*stack_b);
}
