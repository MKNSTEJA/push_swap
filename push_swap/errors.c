/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 12:59:44 by kmummadi          #+#    #+#             */
/*   Updated: 2024/12/06 21:15:54 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_numbers(char **argv);
int	check_duplicates(char **argv);
int	sort_checker(char **argv);

int	errors(char **argv, int argc)
{
	if (argc < 2)
	{
		return (-1);
	}
	if (check_numbers(argv) == -1)
	{
		return (-1);
	}
	if (check_duplicates(argv) == -1)
	{
		return (-1);
	}
	if (sort_checker(argv) == 0)
	{
		return (0);
	}

	return (1);
}

int	check_numbers(char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (argv[i])
	{
		j = 0;
		if (ft_strlen(argv[i]) >= 10)
		{
			if (ft_strncmp(argv[i], "2147483647", ft_strlen("2147483647")) < 0)
				return (-1);
		}
		while (argv[i][j] != '\0')
		{
			if ((!(argv[i][j] >= 48 && argv[i][j] <= 57)) && (argv[i][j] != 45
					&& argv[i][j] != 43))
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_duplicates(char **argv)
{
	int	num;
	int	i;
	int	j;

	num = 0;
	i = 0;
	j = 0;
	while (argv[i])
	{
		num = ft_atoi(argv[i]);
		j = i;
		while (argv[j])
		{
			if ((num == ft_atoi(argv[j])) && (i != j))
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}

int	sort_checker(char **argv)
{
	int	i;

	i = 0;
	while (argv[i + 1])
	{
		if (ft_atoi(argv[i]) > ft_atoi(argv[i + 1]))
			return (-1);
		i++;
	}
	return (0);
}
