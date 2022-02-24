/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_functions.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqureshi <hqureshi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:51:30 by hqureshi          #+#    #+#             */
/*   Updated: 2022/02/24 14:01:32 by hqureshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	reverse_rotate_a(t_node **stack_a)
{
	if (stack_a)
	{
		rrab(stack_a);
		write(1, "rra\n", 4);
	}
}

void	reverse_rotate_b(t_node **stack_b)
{
	if (stack_b)
	{
		rrab(stack_b);
		write(1, "rrb\n", 4);
	}
}

void	reverse_rotate_ab(t_node **stack_a, t_node **stack_b)
{
	if (stack_a && stack_b)
	{
		rrab(stack_a);
		rrab(stack_b);
		write(1, "rra\n", 4);
		write(1, "rrb\n", 4);
	}
}