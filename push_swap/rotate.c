/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:24:20 by kmummadi          #+#    #+#             */
/*   Updated: 2024/11/10 12:35:13 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ra(linked_list *stacka)
{
    n_list *beg;
    n_list *ptr;

    if (!stacka || !stacka->start || !(stacka->start)->next)
        return;
    beg = malloc(sizeof(n_list));
    ptr = stacka->start;
    free(stacka->start);
    beg->value = ptr->value;
    beg->index = ptr->index;
    stacka->start = ptr->next;
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
    beg = malloc(sizeof(n_list));
    if (!beg)
        return;
    ptr = stackb->start;
    beg->value = ptr->value;
    beg->index = ptr->index;
    stackb->start = ptr->next;
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
