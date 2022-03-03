/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_errors.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqureshi <hqureshi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 10:37:17 by hqureshi          #+#    #+#             */
/*   Updated: 2022/03/01 15:10:40 by hqureshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_check_input(char *val, t_node **stack_a)
{
	int	i;

	i = 0;
	if (val[i] == '-' && val[i + 1] == '\0')
	{
			write(2, "Error\n", 6);
			free_stack(stack_a);
			exit (0);
	}
	if (val[i] == '-') 
		i++;
	while (val[i])
	{
		if (ft_isdigit(val[i]) == 0)
		{
			write(2, "Error\n", 6);
			free_stack(stack_a);
			exit (0);
		}
		i++;
	}
}

void	ft_check_digits(char **argv, t_node **stack_a)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][0] == '-')
			{
				ft_check_input(&argv[i][j], stack_a);
				break ;
			}
			if (ft_isdigit(argv[i][j]) == 0)
			{
				write(2, "Error\n", 6);
				free_stack(stack_a);
				exit (0);
			}
			j++;
		}
		i++;
	}
}

void	ft_check_dups(t_node *stack_a, int val)
{
	while (stack_a != NULL)
	{
		if (stack_a->value == val)
		{
			write(2, "Error\n", 6);
			free_stack(&stack_a);
			exit (0);
		}
		stack_a = stack_a->next;
	}
}

int	ft_check_sorted(t_node *stack_a)
{
	t_node	*tmp;
	int		ret;

	ret = 0;
	tmp = stack_a;
	while (tmp->next != NULL)
	{
		if (tmp->value > tmp->next->value)
		{
			ret = 1;
		}
		tmp = tmp->next;
	}
	return (ret);
}
