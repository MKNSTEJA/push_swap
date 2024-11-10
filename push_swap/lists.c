/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:27:24 by kmummadi          #+#    #+#             */
/*   Updated: 2024/11/09 18:42:43 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

linked_list	*new_list(void)
{
	linked_list	*ll;

	ll = malloc(sizeof(linked_list));
	if (ll == NULL)
		return (NULL);
	ll->start = NULL;
	return (ll);
}

int	append_list(linked_list *ll, int num)
{
	n_list	*ptr;
	n_list	*new;

	new = malloc(sizeof(n_list));
	if (new == NULL)
		return (-1);
	new->value = num;
	new->next = NULL;
	ptr = ll->start;
	if (ll->start == NULL)
	{
		ll->start = new;
	}
	else
	{
		ptr = ll->start;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new;
	}

	return (0);
}

int list_size(linked_list *list)
{
    int count = 0;
    n_list *current;

    if (!list)
        return 0;

    current = list->start;
    while (current)
    {
        count++;
        current = current->next;
    }
    return count;
}

int	remove_list(linked_list *ll, int pos)
{
	n_list	*current;
	n_list	*ahead;
	n_list	*prev;

	current = ll->start;
	if (!current)
		return (-1);
	if (pos == 0)
	{
		ll->start = current->next;
		free(current);
		return (0);
	}
	prev = current;
	while (pos-- && current->next)
	{
		prev = current;
		current = current->next;
	}
	if (pos > 0 || !current)
		return (-1);
	ahead = current->next;
	prev->next = ahead;
	free(current);
	return (0);
}

void free_list(linked_list *list)
{
    if (!list)
        return;
    n_list *current = list->start;
    n_list *next_node;
    while (current)
    {
        next_node = current->next;
        free(current);
        current = next_node;
    }
    free(list);
}

void print_stack(linked_list *stack, const char *stack_name)
{
    printf("Contents of %s:\n", stack_name);
    if (!stack || !stack->start)
    {
        printf("[Empty]\n");
        return;
    }
    n_list *ptr = stack->start;
    while (ptr)
    {
        printf("Value: %d, Index: %d\n", ptr->value, ptr->index);
        ptr = ptr->next;
    }
    printf("\n");
}

