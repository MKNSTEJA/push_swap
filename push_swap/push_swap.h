/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknsteja <mknsteja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:20:02 by kmummadi          #+#    #+#             */
/*   Updated: 2024/11/05 13:05:53 by mknsteja         ###   ########.fr       */
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
void			free_list(linked_list *ll);
int				ft_atoi(char *str);
int				radix_sort(linked_list *stacka, linked_list *stackb);
void			pa(linked_list *stacka, linked_list *stackb);
void			pb(linked_list *stacka, linked_list *stackb);
void			ra(linked_list *stacka);
void			rb(linked_list *stackb);
void			rr(linked_list *stacka, linked_list *stackb);
void			rrb(linked_list *stackb);
void			rra(linked_list *stacka);
void			rrr(linked_list *stacka, linked_list *stackb);
void			sa(linked_list *stacka);
void			sb(linked_list *stackb);
void			ss(linked_list *stacka, linked_list *stackb);
#endif