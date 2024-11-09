/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:06:01 by kmummadi          #+#    #+#             */
/*   Updated: 2024/11/02 12:42:32 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(linked_list *stackb)
{
	n_list	*ptr;
	n_list	*end;

	if (!stackb || !(stackb->start)->next)
		return ;
	end = stackb->start;
	ptr = end;
	while (end->next)
	{
		ptr = end;
		end = end->next;
	}
	ptr->next = NULL;
	end->next = stackb->start;
	stackb->start = end;
}

void	rra(linked_list *stacka)
{
	n_list	*ptr;
	n_list	*end;

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
}

void	rrr(linked_list *stacka, linked_list *stackb)
{
	rra(stacka);
	rrb(stackb);
}
