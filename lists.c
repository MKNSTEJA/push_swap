/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:27:24 by kmummadi          #+#    #+#             */
/*   Updated: 2024/12/06 11:13:11 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_head	*new_list(void)
{
	t_head	*ll;

	ll = malloc(sizeof(t_head));
	if (ll == NULL)
		return (NULL);
	ll->start = NULL;
	return (ll);
}

int	append_list(t_head *ll, int num)
{
	t_linked_list	*ptr;
	t_linked_list	*new;

	new = malloc(sizeof(t_linked_list));
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

int	list_size(t_head *list)
{
	int				count;
	t_linked_list	*current;

	count = 0;
	if (!list)
		return (0);
	current = list->start;
	while (current)
	{
		count++;
		current = current->next;
	}
	return (count);
}

int	remove_list(t_head *ll, int pos)
{
	t_linked_list	*current;
	t_linked_list	*ahead;
	t_linked_list	*prev;

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

void	free_list(t_head *list)
{
	t_linked_list	*current;
	t_linked_list	*next_node;

	if (!list)
		return ;
	current = list->start;
	while (current)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
	free(list);
}
