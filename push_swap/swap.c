/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:42:05 by kmummadi          #+#    #+#             */
/*   Updated: 2024/10/26 13:51:28 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sa(linked_list *stacka)
{
    n_list *first;
    n_list *second;

    if(!stacka || !stacka->start || !(stacka->start)->next)
        return;
    first = stacka->start;
    second = first->next;

    first->next = second->next;
    second->next = first;
    stacka->start = second;
}

void sb(linked_list *stackb)
{
    n_list *first;
    n_list *second;

    if(!stackb || !stackb->start || !(stackb->start)->next)
        return;
    first = stackb->start;
    second = first->next;

    first->next = second->next;
    second->next = first;
    stackb->start = second;
}

void ss(linked_list *stacka, linked_list *stackb)
{
    sa(stacka);
    sb(stackb);
}
