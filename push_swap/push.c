/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:54:08 by kmummadi          #+#    #+#             */
/*   Updated: 2024/10/26 19:03:10 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void pa(linked_list *stacka, linked_list *stackb)
{
    n_list *a;
    n_list *b;
    
    if(!stackb || !stackb -> start)
        return;
    a = stacka->start;
    b = stackb->start;
    stackb->start = b->next;
    b->next = a;
    stacka->start = b;
}

void pb(linked_list *stacka, linked_list *stackb)
{
    n_list *a;
    n_list *b;
    
    if(!stackb || !stackb -> start)
        return;
    a = stacka->start;
    b = stackb->start;
    stacka->start = a->next;
    a->next = b;
    stackb->start = a;
}  