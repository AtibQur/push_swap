/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqureshi <hqureshi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:40:55 by hqureshi          #+#    #+#             */
/*   Updated: 2022/02/28 13:55:44 by hqureshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

/* free stacks */
void	free_stack(t_node **stack)
{
	t_node	*temp;

	if (!stack)
	{
		while (stack)
		{
			temp = (*stack)->next;
			free(temp);
			*stack = temp;
		}
		stack = NULL;
	}
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
		printf("stack value -> %d | %d <- stack index\n", temp->value, temp->index);
		temp = temp->next;
	}
	printf("\n");
}
