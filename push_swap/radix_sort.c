/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:30:33 by mknsteja          #+#    #+#             */
/*   Updated: 2024/12/06 11:21:28 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		calculate_max_bits(t_head *stacka);
void	push_or_rotate(t_head **stacka, t_head **stackb, int j);
void	push_back(t_head **stacka, t_head **stackb);
void	log_op(const char *str);

int	radix_sort(t_head **stacka, t_head **stackb)
{
	int	max_bits;
	int	lst_size;
	int	i;
	int	j;

	if (!stacka || !*stacka)
		return (-1);
	max_bits = calculate_max_bits(*stacka);
	lst_size = list_size(*stacka);
	j = 0;
	while (j < max_bits)
	{
		i = 0;
		while (i < lst_size)
		{
			push_or_rotate(stacka, stackb, j);
			i++;
		}
		push_back(stacka, stackb);
		j++;
	}
	return (0);
}

void	push_back(t_head **stacka, t_head **stackb)
{
	while ((*stackb)->start)
	{
		log_op("pa");
		pa(*stacka, *stackb);
	}
}

void	push_or_rotate(t_head **stacka, t_head **stackb, int j)
{
	if ((((*stacka)->start->index >> j) & 1) == 0)
	{
		log_op("pb");
		pb(*stacka, *stackb);
	}
	else
	{
		log_op("ra");
		ra(*stacka);
	}
}

int	calculate_max_bits(t_head *stacka)
{
	t_linked_list	*ptr;
	int				max;
	int				max_bits;

	max_bits = 0;
	if (!stacka || !stacka->start)
	{
		printf("Error: Stack A is empty\n");
		return (0);
	}
	ptr = stacka->start;
	max = ptr->index;
	while (ptr)
	{
		if (ptr->index > max)
		{
			max = ptr->index;
		}
		ptr = ptr->next;
	}
	while ((int)((max >> max_bits)) != (int)0)
		max_bits++;
	return (max_bits);
}

void	log_op(const char *str)
{
	if (!str)
		return ;
	ft_putstr(str);
	ft_putstr("\n");
}
