/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 12:39:46 by kmummadi          #+#    #+#             */
/*   Updated: 2024/12/06 11:13:34 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_head	*stacka;
	t_head	*stackb;

	if (errors(argv, argc) < 0)
	{
		ft_putstr_fd("Error\n", 2);
		return (-1);
	}
	stacka = get_input(argv + 1, argc - 1);
	if (!stacka)
	{
		printf("List Error\n");
		return (0);
	}
	stackb = new_list();
	if (!stackb)
	{
		free_list(stacka);
		printf("List Error\n");
		return (0);
	}
	index_list(stacka);
	radix_sort(&stacka, &stackb);
	free_list(stacka);
	free_list(stackb);
	return (0);
}
