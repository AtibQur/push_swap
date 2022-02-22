/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqureshi <hqureshi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:09:23 by hqureshi          #+#    #+#             */
/*   Updated: 2022/02/22 17:04:27 by hqureshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

// t_node	*next_index(t_node *list)
// {
// 	t_node	*lowest;
// 	t_node	*temp;

// 	temp = list;
// 	while (temp)
// 	{
// 		if (temp->index < 0)
// 		{
// 			lowest = new_stack(temp->value, temp->index);
// 			break ;
// 		}
// 		temp = temp->next;
// 	}
// 	while (list)
// 	{
// 		if (list->value < lowest->value && list->index < 0)
// 		{
// 			lowest->value = list->value;
// 			lowest->index = list->index;
// 		}
// 		list = list->next;
// 	}
// 	return (lowest);
// }

void	indexing(t_node **stack)
{
	t_node	*lowest;
	t_node	*temp;
	int		i;
	int		size;

	i = 0;
	lowest = NULL;
	size = size_of_a(*stack);
	while (i < size)
	{
		temp = *stack;
		// lowest = next_index(*stack);
		while (temp)
		{
			// if (temp->value == lowest->value)
			// {
			// 	temp->index = i;
			// 	break ;
			// }
			temp = temp->next;
		}
		free(lowest);
		i++;
	}
}

int	size_of_a(t_node *stack)
{
	int		count;
	t_node	*tmp;

	count = 0;
	tmp = stack;
	while (tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
