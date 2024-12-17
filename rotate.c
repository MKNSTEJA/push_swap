/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:24:20 by kmummadi          #+#    #+#             */
/*   Updated: 2024/12/17 15:08:44 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_head *stacka)
{
	t_linked_list	*first;
	t_linked_list	*last;

	if (!stacka || !stacka->start || !(stacka->start->next))
		return ;
	first = stacka->start;
	stacka->start = first->next;
	last = stacka->start;
	while (last->next)
		last = last->next;
	last->next = first;
	first->next = NULL;
	log_op("ra");
}

void	rb(t_head *stackb)
{
	t_linked_list	*first;
	t_linked_list	*last;

	if (!stackb || !stackb->start || !(stackb->start->next))
		return ;
	first = stackb->start;
	stackb->start = first->next;
	last = stackb->start;
	while (last->next)
		last = last->next;
	last->next = first;
	first->next = NULL;
	log_op("ra");
}

void	rr(t_head *stacka, t_head *stackb)
{
	ra(stacka);
	rb(stackb);
	log_op("rr");
}
