/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   log.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknsteja <mknsteja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:40:51 by mknsteja          #+#    #+#             */
/*   Updated: 2024/11/05 16:53:38 by mknsteja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

char	*ft_strdup(const char *src)
{
	char	*new_string;
	int		i;

	if (!src)
		return (NULL);
	new_string = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (new_string == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		new_string[i] = src[i];
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*string;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	else if (!s2)
		return (ft_strdup(s1));
	string = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 2));
	if (string == NULL)
		return (NULL);
	while (s1[i])
	{
		string[i] = s1[i];
		i++;
	}
	while (s2[j])
		string[i++] = s2[j++];
	string[i+1] = ' ';
	string[i+2] = '\0';
	return (string);
}

void log_op(char *log, const char *str)
{
	char **temp;
	
	*temp = log;
	log = ft_strjoin(log, str);
	if(*temp && temp)
	{
		free(*temp);
		*temp = NULL;
	}
}