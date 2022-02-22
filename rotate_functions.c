/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqureshi <hqureshi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:51:30 by hqureshi          #+#    #+#             */
/*   Updated: 2022/02/22 17:21:04 by hqureshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	rotate_a(t_node *stack_a)
{
	if (stack_a)
	{
		rab(stack_a);
		write(1, "ra\n", 3);
	}
}

void	rotate_b(t_node *stack_b)
{
	if (stack_b)
	{
		rab(stack_b);
		write(1, "rb\n", 3);
	}
}
