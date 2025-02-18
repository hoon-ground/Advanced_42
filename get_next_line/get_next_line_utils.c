/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihookim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 11:24:57 by jihookim          #+#    #+#             */
/*   Updated: 2025/01/17 22:52:44 by jihookim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*gnl_strchr(char *str, int c)
{
	size_t	index;

	index = 0;
	if (str == NULL)
		return (NULL);
	while (*(str + index))
	{
		if (c == *(str + index))
			return (str + index);
		index++;
	}
	if (c == 0)
		return (str + index);
	return (NULL);
}

char	*gnl_strjoin(char *s1, char *s2)
{
	char	*s1_tmp;
	char	*new;
	size_t	size;
	size_t	index;

	size = gnl_strlen(s1) + gnl_strlen(s2);
	index = 0;
	new = malloc(size + 1);
	s1_tmp = s1;
	if (!new)
		return (NULL);
	while (*s1)
		*(new + index++) = *(s1++);
	while (*s2)
		*(new + index++) = *(s2++);
	*(new + index) = '\0';
	if (*s1_tmp)
		free(s1_tmp);
	return (new);
}

char	*gnl_free(char **s1, char **s2)
{
	if (s1 && *s1)
	{
		free(*s1);
		*s1 = NULL;
	}
	if (s2 && *s2)
	{
		free(*s2);
		*s2 = NULL;
	}
	return (NULL);
}

char	*gnl_substr(char *str, size_t start, size_t len)
{
	size_t	index;
	char	*new;

	new = malloc(BUFFER_SIZE + 1);
	if (!new)
		return (NULL);
	index = 0;
	while (index < len && *(str + start + index))
	{
		*(new + index) = *(str + start + index);
		index++;
	}
	*(new + index) = '\0';
	return (new);
}

size_t	gnl_strlen(char *str)
{
	size_t	len;

	len = 0;
	while (*(str + len))
		len++;
	return (len);
}
