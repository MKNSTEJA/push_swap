/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   log.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:40:51 by mknsteja          #+#    #+#             */
/*   Updated: 2024/11/09 17:24:16 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(const char *string)
{
	int	length;

	length = 0;
	while (string[length])
	{
		length++;
	}
	return (length);
}

char	*ft_strdup(const char *src)
{
	char	*new_string;
	int		i;

	if (!src)
		return (NULL);
	new_string = malloc(sizeof(char) * (ft_strlen(src) + 1));
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
	if (!s2)
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
	string[i] = ' ';
	string[i+1] = '\0';
	return (string);
}

// void log_op(char **log, const char *str)
// {
// 	char *temp;
	
// 	if(!log || !str)
// 		return;

// 	temp = *log;
// 	*log = ft_strjoin(*log, str);
// 	if (!*log)
//     {
//         printf("Error: Memory allocation failed in log_op\n");
//         // Clean up if necessary
//         if (temp)
//             free(temp);
//         exit(-1); // Or handle the error as appropriate
//     }
// 	if(temp)
// 		free(temp);
// }

void log_op(FILE *log_file, const char *str)
{
    if (!log_file || !str)
        return;

    fprintf(log_file, "%s\n", str);
}