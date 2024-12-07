/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:06:01 by kmummadi          #+#    #+#             */
/*   Updated: 2024/12/07 09:09:23 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_head *stackb)
{
	t_linked_list	*prev;
	t_linked_list	*current;

	prev = NULL;
	current = stackb->start;
	if (!stackb || !stackb->start || !stackb->start->next)
		return ;
	while (current->next)
	{
		prev = current;
		current = current->next;
	}
	prev->next = NULL;
	current->next = stackb->start;
	stackb->start = current;
	log_op("rrb");
}

void	rra(t_head *stacka)
{
	t_linked_list	*ptr;
	t_linked_list	*end;

	if (!stacka || !(stacka->start)->next)
		return ;
	end = stacka->start;
	ptr = end;
	while (end->next)
	{
		ptr = end;
		end = end->next;
	}
	ptr->next = NULL;
	end->next = stacka->start;
	stacka->start = end;
	log_op("rra");
}

void	rrr(t_head *stacka, t_head *stackb)
{
	rra(stacka);
	rrb(stackb);
	log_op("rrr");
}
