/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:24:20 by kmummadi          #+#    #+#             */
/*   Updated: 2024/11/09 13:13:12 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ra(linked_list *stacka)
{
    n_list *beg;
    n_list *ptr;

    if (!stacka || !stacka->start || !(stacka->start)->next)
        return;
    ptr = stacka->start;
    beg = ptr;
    stacka->start = beg->next;
    beg->next = NULL;
    while (ptr->next)
        ptr = ptr->next;
    ptr->next = beg;
}

void rb(linked_list *stackb)
{
    n_list *beg;
    n_list *ptr;

    if (!stackb || !stackb->start || !(stackb->start)->next)
        return;
    ptr = stackb->start;
    beg = ptr;
    stackb->start = beg->next;
    beg->next = NULL;
    while (ptr->next)
        ptr = ptr->next;
    ptr->next = beg;
}

void rr(linked_list *stacka, linked_list *stackb)
{
    ra(stacka);
    rb(stackb);
}
