/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqureshi <hqureshi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:40:55 by hqureshi          #+#    #+#             */
/*   Updated: 2022/02/07 15:46:43 by hqureshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

t_node	*insert_tail(t_node *head, int val)
{
	t_node	*current_node;
	t_node	*new_node;

	current_node = head;
	new_node = (t_node *) malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->value = val;
	new_node->next = NULL;
	while (current_node != NULL && current_node->next != NULL)
		current_node = current_node->next;
	if (current_node != NULL)
		current_node->next = new_node;
	else
		head = new_node;
	return (head);
}

t_node	*ft_create_list(t_node *stack_a, int argc, char **argv)
{
	int		val;
	int		i;

	i = 1;
	while (i < argc)
	{
		val = ft_atoi(argv[i]);
		ft_check_dups(stack_a, val);
		stack_a = insert_tail(stack_a, val);
		i++;
	}
	return (stack_a);
}
