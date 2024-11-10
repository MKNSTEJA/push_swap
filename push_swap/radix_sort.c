/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:30:33 by mknsteja          #+#    #+#             */
/*   Updated: 2024/11/10 11:14:43 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	calculate_max_bits(linked_list *stacka);

int radix_sort(linked_list **stacka, linked_list **stackb, FILE *log_file)
{
	int max_bits;
	int lst_size;
	int i;

	if(!stacka || !*stacka)
	{
		printf("Empty stack for radix sort\n");
		return(-1);
	}
	max_bits = calculate_max_bits(*stacka);

	lst_size = list_size(*stacka);
	i = 0;
	while(max_bits--)
	{
		i = 0;	
		while(i < lst_size)
		{
			if((((*stacka)->start->index) & 1) == 0)
			{
				log_op(log_file, "pb");
				pb(*stacka, *stackb);
			}
			else
			{
				log_op(log_file, "ra");
				ra(*stacka);
			}
			i++;
		}
		i = list_size(*stackb);
		printf("i: %d\n", i);
		while(i--)
		{
			log_op(log_file, "pa");
			pa(*stacka, *stackb);
		}
		print_stack(*stacka, "stacka");
		print_stack(*stackb, "stackb");
	}
	return(0);
}

int	calculate_max_bits(linked_list *stacka)
{
	n_list	*ptr;
	int		max;
	int		max_bits;

	max_bits = 0;
	if (!stacka || !stacka->start)
	{
		printf("Error: Stack A is empty\n");
		return (0);
	}
	ptr = stacka->start;
	max = ptr->index;
	// printf("Initial max value: %d\n", max);
	while (ptr)
	{
		// printf("Current node index: %d\n", ptr->index);
		if (ptr->index > max)
		{
			max = ptr->index;
			// printf("Updated max value: %d\n", max);
		}
		ptr = ptr->next;
	}
	while((int)((max >> max_bits)) != (int)0)
		max_bits++;
	// printf("Max bits: %d\n", max_bits);
	return (max_bits);
}
