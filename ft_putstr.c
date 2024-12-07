/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:22:43 by kmummadi          #+#    #+#             */
/*   Updated: 2024/12/06 11:24:42 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putstr(const char *str)
{
	int	len;

	len = 0;
	if (!str)
		return ;
	while (str[len])
		len++;
	write(1, str, len);
}
