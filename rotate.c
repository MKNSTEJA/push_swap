/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:24:20 by kmummadi          #+#    #+#             */
/*   Updated: 2024/12/07 09:09:52 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_head *stacka)
{
	t_linked_list	*beg;
	t_linked_list	*ptr;

	if (!stacka || !stacka->start || !(stacka->start)->next)
		return ;
	beg = malloc(sizeof(t_linked_list));
	ptr = stacka->start;
	free(stacka->start);
	beg->value = ptr->value;
	beg->index = ptr->index;
	stacka->start = ptr->next;
	beg->next = NULL;
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = beg;
	log_op("ra");
}

void	rb(t_head *stackb)
{
	t_linked_list	*beg;
	t_linked_list	*ptr;

	if (!stackb || !stackb->start || !(stackb->start)->next)
		return ;
	beg = malloc(sizeof(t_linked_list));
	if (!beg)
		return ;
	ptr = stackb->start;
	beg->value = ptr->value;
	beg->index = ptr->index;
	stackb->start = ptr->next;
	beg->next = NULL;
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = beg;
	log_op("rb");
}

void	rr(t_head *stacka, t_head *stackb)
{
	ra(stacka);
	rb(stackb);
	log_op("rr");
}
