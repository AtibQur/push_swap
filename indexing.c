/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqureshi <hqureshi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:09:23 by hqureshi          #+#    #+#             */
/*   Updated: 2022/02/23 15:07:50 by hqureshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	next_index(t_node *list)
{
	t_node	*lowest;
	t_node	*temp;

	temp = list;
	while (temp)
	{
		if (temp->index == -1)
		{
			lowest = temp;
			break ;
		}
		temp = temp->next;
	}
	while (list)
	{
		if (list->value < lowest->value && list->index == -1)
		{
			lowest = list;
		}
		list = list->next;
	}
	return (lowest->value);
}

int	size_of_a(t_node *l)
{
	size_t	i;

	i = 0;
	while (l)
	{
		l = l->next;
		i++;
	}
	return (i);
}

void	indexing(t_node **stack)
{
	t_node	*temp;
	int		lowest;
	int		i;
	int		size;

	i = 0;
	size = size_of_a(*stack);
	while (i < size)
	{
		temp = *stack;
		lowest = next_index(*stack);
		while (temp)
		{
			if (temp->value == lowest)
			{
				temp->index = i;
				i++;
			}
			temp = temp->next;
		}
	}
}
