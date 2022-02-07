/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqureshi <hqureshi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:40:53 by hqureshi          #+#    #+#             */
/*   Updated: 2022/02/07 15:49:26 by hqureshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include "limits.h"
# include "./libft/libft.h"
# include "stdio.h"

typedef struct node
{
	int				value;
	struct node		*next;
}	t_node;

int		main(int argc, char **argv);

/* Create list */
t_node	*insert_tail(t_node *head, int val);
t_node	*ft_create_list(t_node *stack_a, int argc, char **argv);

/* Check errors */
int		ft_check_minmax(char *argv);;
int		ft_check_sorted(t_node *stack_a);
void	ft_check_digits(char **argv);
void	ft_check_dups(t_node *stack_a, int val);
void	ft_check_input(char *val);

/* remove at end functions*/
void	printlist(t_node *head);

#endif
