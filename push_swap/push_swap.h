/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:20:02 by kmummadi          #+#    #+#             */
/*   Updated: 2024/11/09 18:06:21 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>

typedef struct node
{
	int			value;
	int			index;
	struct node	*next;
}				n_list;

typedef struct linked_list
{
	n_list		*start;
}				linked_list;

linked_list		*new_list(void);
int				append_list(linked_list *ll, int num);
int				remove_list(linked_list *ll, int pos);
void			free_list(linked_list *list);
int				ft_atoi(char *str);
void			ra(linked_list *stacka);
void			rb(linked_list *stackb);
void			rr(linked_list *stacka, linked_list *stackb);
void			rra(linked_list *stacka);
void			rrb(linked_list *stackb);
void			rrr(linked_list *stacka, linked_list *stackb);
void			sa(linked_list *stacka);
void			sb(linked_list *stackb);
void			ss(linked_list *stacka, linked_list *stackb);
void			pa(linked_list *stacka, linked_list *stackb);
void			pb(linked_list *stacka, linked_list *stackb);
void			log_op(FILE *log_file, const char *str);
void			index_list(linked_list *ll);
linked_list		*get_input(char **argv, int argc);
int				radix_sort(linked_list *stacka, linked_list *stackb, FILE *log_file);
int				list_size(linked_list *ll);
void			perform_op(linked_list *stacka, linked_list *stackb, int i, FILE *log_file);

#endif