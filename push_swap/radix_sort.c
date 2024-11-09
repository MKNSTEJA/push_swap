/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:30:33 by mknsteja          #+#    #+#             */
/*   Updated: 2024/11/09 18:05:50 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h> // Include this header for file operations

int		calculate_max_bits(linked_list *stacka);
void	perform_op(linked_list *stacka, linked_list *stackb, int i, FILE *log_file);

int	radix_sort(linked_list *stacka, linked_list *stackb, FILE *log_file)
{
	int	max_bits;
	int	i;

	max_bits = calculate_max_bits(stacka);
	if (max_bits == -1)
	{
		printf("Error: Failed to calculate max bits\n");
		return (-1);
	}
	i = 0;
	// printf("Initial value of i: %d\n", i);
	// printf("Max bits calculated: %d\n", max_bits);
	while (i < max_bits)
	{
		perform_op(stacka, stackb, i, log_file);
		i++;
	}
	return (0);
}

void perform_op(linked_list *stacka, linked_list *stackb, int i, FILE *log_file)
{
    int size;
    int j = 0;
    
    if (!stacka)
    {
        printf("Error: Stack A is NULL\n");
        return;
    }
    size = list_size(stacka);
    while (j < size)
    {
        if (!stacka->start)
        {
            printf("Error: Stack A is empty during operation\n");
            break;
        }
        if (((stacka->start->index >> i) & 1) == 0)
        {
            pb(stacka, stackb);
            fprintf(log_file, "pb\n");
        }
        else
        {
            ra(stacka);
            fprintf(log_file, "ra\n");
        }
        j++;
    }
    while (stackb && stackb->start)
    {
        pa(stacka, stackb);
        fprintf(log_file, "pa\n");
    }
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
		return (-1);
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
	while ((max >> max_bits) != 0)
		max_bits++;
	// printf("Max bits: %d\n", max_bits);
	return (max_bits);
}
