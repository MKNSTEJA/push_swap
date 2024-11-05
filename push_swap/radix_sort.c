/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknsteja <mknsteja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:30:33 by mknsteja          #+#    #+#             */
/*   Updated: 2024/11/05 13:12:44 by mknsteja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int radix_sort(linked_list *stacka, linked_list *stackb)
{
	int max_bits;
	int i;
	
	max_bits = calculate_max_bits(stacka);
	i = 0;
	while(i < max_bits)
	{
		while (stacka->start)
		{
			if((((stacka->start)->index) >> i & 1) == 0)
				pb(stacka, stackb);
			else
				ra(stacka);
		}
		while(stackb->start)
			pa(stacka, stackb);
		i++;
	}
	return (0);	
}

int calculate_max_bits(linked_list *stacka)
{
	n_list *ptr;
	int max;
	
	ptr = stacka->start;
	max = ptr->index;
	while(ptr)
	{
		if(ptr->index > max)
			max = ptr->index;
		ptr = ptr->next;
	}
	return (max);
}
