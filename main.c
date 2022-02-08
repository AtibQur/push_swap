/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqureshi <hqureshi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:38:10 by hqureshi          #+#    #+#             */
/*   Updated: 2022/02/08 13:42:21 by hqureshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*stack_a;

	if (argc <= 1)
		return (0);
	stack_a = NULL;
	ft_check_digits(argv);
	stack_a = ft_create_list(stack_a, argc, argv);
	if (ft_check_sorted(stack_a) == 1)
	{
		printf("a\n");
	}

	// printlist(stack_a);
	return (0);
}
