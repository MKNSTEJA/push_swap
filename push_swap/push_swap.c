/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:19:42 by kmummadi          #+#    #+#             */
/*   Updated: 2024/10/25 21:47:48 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

linked_list *get_input(char **argv, int argc)
{
    int i;
    linked_list *ll;

    i = 0;
    while(i < argc)
    {
        if((append_list(ll, ft_atoi(*(argv + i)))) == -1)
            return (NULL);
        i++;
    }
    return (ll);
}

void index_list(linked_list *ll)
{
    n_list *ptr1;
    n_list *ptr2;
    int index_val;
    
    ptr1 = ll->start;
    ptr2 = ptr1;
    index_val = 0;
    while(ptr1)
    {
        index_val = 0;
        ptr2 = ll->start;
        while(ptr2)
        {
            if(ptr1->value > ptr2->value)
                index_val++;
            ptr2 = ptr2->next;
        }
        ptr1->index = index_val;
        ptr1 = ptr1->next;
    }
}
