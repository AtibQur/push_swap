/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqureshi <hqureshi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 11:34:55 by hqureshi          #+#    #+#             */
/*   Updated: 2022/02/28 15:57:25 by hqureshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	size_maxbitwise(int max_num)
{
	int	max_bits;

	max_bits = 0;
	while ((max_num >> max_bits) != 0)
	{
		max_bits++;
	}	
	return (max_bits);
}

void	sort_big_stack(t_node **stack_a, int size)
{
	t_node	*stack_b;
	int		i;
	int		j;
	int		max_bitwise;

	i = 0;
	stack_b = NULL;
	max_bitwise = size_maxbitwise(size - 1);
	while (i < max_bitwise)
	{
		j = 0;
		while (j < size)
		{
			if ((((*stack_a)->index >> i) & 1) == 1)
				rotate_a(stack_a);
			else
				pb(stack_a, &stack_b);
			j++;
		}
		while (stack_b)
			pa(stack_a, &stack_b);
		i++;
	}
	free_stack(stack_a);
	exit (0);
}
