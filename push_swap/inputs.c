/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inputs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:19:42 by kmummadi          #+#    #+#             */
/*   Updated: 2024/12/06 11:12:59 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_head	*get_input(char **argv, int argc)
{
	int		i;
	t_head	*ll;

	i = 0;
	ll = new_list();
	if (!ll)
	{
		return (NULL);
	}
	while (i < argc)
	{
		if ((append_list(ll, ft_atoi(*(argv + i)))) == -1)
		{
			free_list(ll);
			return (NULL);
		}
		i++;
	}
	return (ll);
}

void	index_list(t_head *ll)
{
	t_linked_list	*ptr1;
	t_linked_list	*ptr2;
	int				index_val;

	ptr1 = ll->start;
	ptr2 = ptr1;
	index_val = 0;
	while (ptr1)
	{
		index_val = 0;
		ptr2 = ll->start;
		while (ptr2)
		{
			if (ptr1->value > ptr2->value)
				index_val++;
			ptr2 = ptr2->next;
		}
		ptr1->index = index_val;
		ptr1 = ptr1->next;
	}
}
