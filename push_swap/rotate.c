/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:24:20 by kmummadi          #+#    #+#             */
/*   Updated: 2024/10/26 19:04:28 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ra(linked_list *stacka)
{
    if(!stacka || !(stacka->start)->next)
        return;
    n_list *beg;
    n_list *ptr;
    
    ptr = stacka->start;
    beg = ptr;
    stacka->start = beg->next;
    beg->next = NULL;
    while(ptr->next)
        ptr = ptr->next;
    ptr->next = beg;
}

void rb(linked_list *stackb)
{
    if(!stackb || !(stackb->start)->next)
        return;
    n_list *beg;
    n_list *ptr;
    
    ptr = stackb->start;
    beg = ptr;
    stackb->start = beg->next;
    beg->next = NULL;
    while(ptr->next)
        ptr = ptr->next;
    ptr->next = beg;
}

void rr(linked_list *stacka, linked_list *stackb)
{
    ra(stacka);
    rb(stackb);
}