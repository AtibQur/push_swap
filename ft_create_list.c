/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqureshi <hqureshi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:40:55 by hqureshi          #+#    #+#             */
/*   Updated: 2022/03/01 14:00:34 by hqureshi         ###   ########.fr       */
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
	new_node->index = -1;
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
	long long int		val;
	int					i;

	i = 1;
	while (i < argc)
	{
		val = ps_atoi(argv[i], &stack_a);
		ft_check_dups(stack_a, val);
		stack_a = insert_tail(stack_a, val);
		if (stack_a == NULL)
		{
			write(2, "Error\n", 6);
			free_stack(&stack_a);
			exit (0);
		}
		i++;
	}
	return (stack_a);
}

int	ps_manage_longmin(unsigned long result, int count, t_node **stack_a)
{
	int	value;

	if (count % 2 != 0)
		value = -1;
	else
		value = 1;
	if (value == -1 && result > 2147483648)
	{
		write(2, "Error\n", 6);
		free_stack(stack_a);
		exit(0);
	}
	else if (value == 1 && result > 2147483647)
	{
		write(2, "Error\n", 6);
		free_stack(stack_a);
		exit(0);
	}
	return (result * value);
}

int	ps_atoi(const char *str, t_node **stack_a)
{
	int				i;
	int				count;
	unsigned long	result;

	i = 0;
	count = 0;
	result = 0;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + str[i] - '0';
		i++;
	}
	return (ps_manage_longmin(result, count, stack_a));
}
