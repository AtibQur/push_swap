/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqureshi <hqureshi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:40:55 by hqureshi          #+#    #+#             */
/*   Updated: 2022/02/08 17:34:02 by hqureshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

/* create small stack and hardcode args till 5 */
void	sort_small_stack(t_node *stack_a, int argc)
{
	t_node	*stack_b;

	stack_b = NULL;
	if (argc == 2)
		sort_two_args(stack_a, stack_b);
}

/* print the whole stack */
void	printlist(t_node *head)
{
	t_node	*temp;

	temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->value);
		temp = temp->next;
	}
	printf("\n");
}
