/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:27:24 by kmummadi          #+#    #+#             */
/*   Updated: 2024/10/25 19:18:44 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

linked_list *new_list(void)
{
    linked_list *ll;
    ll = malloc(sizeof(linked_list));
    if(ll == NULL)
        return(NULL);
    ll->start = NULL;
    return (ll);
}

int append_list(linked_list *ll, int num)
{
    n_list *ptr;
    n_list *new;
    
    new = malloc(sizeof(n_list));
    if(new == NULL)
        return (-1);
    new->value = num;
    new->next = NULL;
    ptr = ll;
    
    while(ptr -> next)
        ptr = ptr->next;
    ptr->next = new;
    return(0);
}

int remove_list(linked_list *ll, int pos)
{
    n_list *current;
    n_list *ahead;
    n_list *prev;
    
    current = ll->start;
    ahead = current->next;
    prev = current;
    if(pos == 0)
    {
        ll->start = current->next;
        free(current);
        return(0);
    }
    while(pos-- && current->next)
    {
        prev = current;
        current = current->next;
        ahead = current->next;
    }
    if(pos > 0)
        return (-1);
    prev->next = ahead;
    free(current);
    return(0);
}

void free_list(linked_list *ll)
{
    n_list *ptr;
    n_list *ahead;
    
    if(!ll)
        return;
    ptr = ll->start;
    ahead = ptr->next;
    while(ptr->next)
    {
        free(ptr);
        ptr = ahead;
        ahead = ahead->next;
    }
    free(ptr);
    free(ll);
}
