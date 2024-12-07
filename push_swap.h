/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:20:02 by kmummadi          #+#    #+#             */
/*   Updated: 2024/12/07 08:56:38 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}					t_linked_list;

typedef struct s_linked_list
{
	t_linked_list	*start;
}					t_head;

t_head				*new_list(void);
int					append_list(t_head *ll, int num);
int					remove_list(t_head *ll, int pos);
void				free_list(t_head *list);
void				ra(t_head *stacka);
void				rb(t_head *stackb);
void				rr(t_head *stacka, t_head *stackb);
void				rra(t_head *stacka);
void				rrb(t_head *stackb);
void				rrr(t_head *stacka, t_head *stackb);
void				sa(t_head *stacka);
void				sb(t_head *stackb);
void				ss(t_head *stacka, t_head *stackb);
void				pa(t_head *stacka, t_head *stackb);
void				pb(t_head *stacka, t_head *stackb);
void				log_op(const char *str);
void				index_list(t_head *ll);
t_head				*get_input(char **argv, int argc);
int					radix_sort(t_head **stacka, t_head **stackb);
int					list_size(t_head *ll);
void				ft_putstr(const char *str);
int					errors(char **argv, int argc);
void				sort_three(t_head **stacka, t_head **stackb);
void				sort_five(t_head **stacka, t_head **stackb, int counter);
#endif