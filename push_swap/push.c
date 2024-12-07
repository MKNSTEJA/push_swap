/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:54:08 by kmummadi          #+#    #+#             */
/*   Updated: 2024/12/07 09:08:26 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_head *stacka, t_head *stackb)
{
	t_linked_list	*a;
	t_linked_list	*b;

	if (!stackb || !stackb->start)
		return ;
	a = stacka->start;
	b = stackb->start;
	stackb->start = b->next;
	b->next = a;
	stacka->start = b;
	log_op("pa");
}

void	pb(t_head *stacka, t_head *stackb)
{
	t_linked_list	*a;
	t_linked_list	*b;

	if (!stacka || !stacka->start)
		return ;
	a = stacka->start;
	b = (stackb)->start;
	stacka->start = a->next;
	a->next = b;
	(stackb)->start = a;
	log_op("pb");
}
