/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 12:39:46 by kmummadi          #+#    #+#             */
/*   Updated: 2024/12/06 21:14:55 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static int	free_str(char **str, char **argv);
static char	**split_strings(char **argv, int argc);

int	main(int argc, char **argv)
{
	t_head	*stacka;
	t_head	*stackb;
	int		error;
	char	**str;

	str = split_strings(argv, argc);
	error = errors(str, argc);
	if (error == -1)
	{
		ft_putstr_fd("Error", 2);
		return (free_str(str, argv), -1);
	}
	else if (error == 0)
		return (free_str(str, argv));
	stacka = get_input(str, argc - 1);
	if (!stacka)
		return (free_str(str, argv));
	stackb = new_list();
	if (!stackb)
	{
		free_list(stacka);
		return (free_str(str, argv));
	}
	index_list(stacka);
	radix_sort(&stacka, &stackb);
	free_list(stacka);
	free_list(stackb);
	return (free_str(str, argv));
}

static char	**split_strings(char **argv, int argc)
{
	char	**str;

	str = NULL;
	if (argc == 2)
	{
		if (ft_strlen(*(argv + 1)) > 1)
		{
			str = ft_split(*(argv + 1), ' ');
			return (str);
		}
	}
	return (argv + 1);
}

static int	free_str(char **str, char **argv)
{
	int	i;

	i = 0;
	if (str != argv + 1)
	{
		if (str != NULL)
		{
			while (str[i])
			{
				if (str[i] != NULL)
					free(str[i]);
				i++;
			}
			if (str)
				free(str);
		}
	}
	return (0);
}
