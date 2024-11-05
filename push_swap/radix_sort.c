/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknsteja <mknsteja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:30:33 by mknsteja          #+#    #+#             */
/*   Updated: 2024/11/05 16:59:06 by mknsteja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int calculate_max_bits(linked_list *stacka);
void perform_op(linked_list *stacka, linked_list *stackb, int *i, char *log);

int radix_sort(linked_list *stacka, linked_list *stackb, char *log)
{
	int max_bits;
	int i;
	
	max_bits = calculate_max_bits(stacka);
	i = 0;
	while(i < max_bits)
	{
		perform_op(stacka, stackb, &i, log);
		i++;
	}
	return (0);	
}

void perform_op(linked_list *stacka, linked_list *stackb, int *i, char *log)
{
	while (stacka->start)
	{
		if((((stacka->start)->index) >> *i & 1) == 0)
		{
			pb(stacka, stackb);
			log_op(log, "pb");			
		}
		else
		{
			ra(stacka);
			log_op(log, "ra");
		}
	}
	while(stackb->start)
	{
		log_op(log, "pa");
		pa(stacka, stackb);
	}
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
