/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 08:22:30 by kmummadi          #+#    #+#             */
/*   Updated: 2024/12/07 09:04:24 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_to_top(t_head **stack, int index);
int		find_min_index(t_head *stack);
void	sort_three(t_head **stacka, t_head **stackb);

void	sort_five(t_head **stacka, t_head **stackb, int counter)
{
	int	min;

	min = find_min_index(*stacka);
	if (counter == 4)
	{
		move_to_top(stacka, min);
		pb(*stacka, *stackb);
		sort_three(stacka, stackb);
		pa(*stacka, *stackb);
	}
	else if (counter == 5)
	{
		move_to_top(stacka, min);
		pb(*stacka, *stackb);
		min = find_min_index(*stacka);
		move_to_top(stacka, min);
		pb(*stacka, *stackb);
		sort_three(stacka, stackb);
		pa(*stacka, *stackb);
		pa(*stacka, *stackb);
	}
}

int	find_min_index(t_head *stack)
{
	int				min;
	int				index;
	int				min_index;
	t_linked_list	*current;

	min = stack->start->index;
	index = 0;
	min_index = 0;
	current = stack->start;
	while (current)
	{
		if (current->value < min)
		{
			min_index = index;
			min = current->index;
		}
		current = current->next;
		index++;
	}
	return (min_index);
}

void	move_to_top(t_head **stack, int index)
{
	int	size;

	size = 5;
	if (index <= size / 2)
	{
		while (index-- > 0)
			ra(*stack);
	}
	else
	{
		index = size - index;
		while (index-- > 0)
			rra(*stack);
	}
}

void	sort_three(t_head **stacka, t_head **stackb)
{
	int	first;
	int	second;
	int	third;

	(void)stackb;
	first = (*stacka)->start->index;
	second = (*stacka)->start->next->index;
	third = (*stacka)->start->next->next->index;
	if (first > second && second < third && first < third)
		sa(*stacka);
	else if (first > second && second > third)
	{
		sa(*stacka);
		rra(*stacka);
	}
	else if (first > second && second < third && first > third)
		ra(*stacka);
	else if (first < second && second > third && first < third)
	{
		sa(*stacka);
		ra(*stacka);
	}
	else if (first < second && second > third && first > third)
		rra(*stacka);
}
