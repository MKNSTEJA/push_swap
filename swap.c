/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:42:05 by kmummadi          #+#    #+#             */
/*   Updated: 2024/12/07 09:10:23 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_head *stacka)
{
	t_linked_list	*first;
	t_linked_list	*second;

	if (!stacka || !stacka->start || !(stacka->start)->next)
		return ;
	first = stacka->start;
	second = first->next;
	first->next = second->next;
	second->next = first;
	stacka->start = second;
	log_op("sa");
}

void	sb(t_head *stackb)
{
	t_linked_list	*first;
	t_linked_list	*second;

	if (!stackb || !stackb->start || !(stackb->start)->next)
		return ;
	first = stackb->start;
	second = first->next;
	first->next = second->next;
	second->next = first;
	stackb->start = second;
	log_op("sb");
}

void	ss(t_head *stacka, t_head *stackb)
{
	sa(stacka);
	sb(stackb);
	log_op("ss");
}
