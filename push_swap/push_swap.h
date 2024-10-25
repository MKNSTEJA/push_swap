/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:20:02 by kmummadi          #+#    #+#             */
/*   Updated: 2024/10/25 19:28:34 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
    int value;
    int index;
    struct node *next;
}n_list;

typedef struct linked_list
{
    n_list *start;
}linked_list;

linked_list *new_list(void);
int append_list(linked_list *ll, int num);
int remove_list(linked_list *ll, int pos);
void free_list(linked_list *ll);
int	ft_atoi(char *str);

#endif