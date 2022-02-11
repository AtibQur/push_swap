/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqureshi <hqureshi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:40:55 by hqureshi          #+#    #+#             */
/*   Updated: 2022/02/11 12:46:16 by hqureshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

/* create small stack and hardcode args till 5 */
void	sort_small_stack(t_node *stack_a)
{
	t_node	*stack_b;
	int		count;

	stack_b = NULL;
	count = count_nodes(stack_a);
	if (count == 2)
		sa(stack_a);
	if (count == 3)
		sort_three_args(stack_a);
}

/* count amount of nodes in list */
int	count_nodes(t_node *head)
{
	t_node	*temp;
	int		count;

	temp = head;
	count = 0;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
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
