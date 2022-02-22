/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqureshi <hqureshi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:40:53 by hqureshi          #+#    #+#             */
/*   Updated: 2022/02/22 15:06:18 by hqureshi         ###   ########.fr       */
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
	int				index;
	struct node		*next;
}	t_node;

int		main(int argc, char **argv);
int		count_nodes(t_node *head);

/* Create and check list */
t_node	*insert_tail(t_node *head, int val);
t_node	*ft_create_list(t_node *stack_a, int argc, char **argv);
void	sort_small_stack(t_node *stack_a);
int		size_of_a(t_node *stack);
void	indexing(t_node **stack);

/* Sorting functions */
void	sa(t_node *stack_a);
void	sb(t_node *stack_b);
void	pa(t_node **stack_a, t_node **stack_b);
void	pb(t_node **stack_a, t_node **stack_b);
void	ss(t_node *stack_a, t_node *stack_b);
void	rab(t_node *list);
void	rrab(t_node *list);
void	sort_three_args(t_node **stack_a);
void	sort_five_args(t_node *stack_a, t_node *stack_b);

/* all instructions */
void	swap(int *a, int *b);
void	rotate_a(t_node *stack_a);
void	rotate_b(t_node *stack_b);
void	reverse_rotate_a(t_node *stack_a);
void	reverse_rotate_b(t_node *stack_b);
void	reverse_rotate_ab(t_node *stack_a, t_node *stack_b);

/* Check errors */
void	ft_check_minmax(long long argv);
int		ft_check_sorted(t_node *stack);
void	ft_check_digits(char **argv);
void	ft_check_dups(t_node *stack_a, int val);
void	ft_check_input(char *val);

/* remove at end functions*/
void	printlist(t_node *head);
#endif
