/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihookim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:25:42 by jihookim          #+#    #+#             */
/*   Updated: 2024/11/07 20:13:16 by jihookim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	is_set(char c, char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static size_t	trim_len(char const *s1, char const *set)
{
	size_t	len;
	size_t	index;

	len = ft_strlen(s1);
	index = 0;
	while (is_set(*((char *)s1 + index), (char *)set))
	{
		len--;
		index++;
		if (len == 0)
			return (len);
	}
	index = ft_strlen(s1) - 1;
	while (is_set(*((char *)s1 + index), (char *)set))
	{
		len--;
		index--;
		if (len == 0)
			return (len);
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_s;
	size_t	size;
	size_t	start;
	size_t	index;

	size = trim_len(s1, set);
	trimmed_s = malloc(size + 1);
	if (trimmed_s == NULL)
		return (trimmed_s);
	index = 0;
	start = 0;
	while (is_set(*((char *)s1 + start), (char *)set))
		start++;
	while (index < size)
	{
		*(trimmed_s + index) = *((char *)s1 + start + index);
		index++;
	}
	*(trimmed_s + index) = '\0';
	return (trimmed_s);
}
