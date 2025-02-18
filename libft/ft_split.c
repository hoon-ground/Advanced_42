/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihookim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:30:09 by jihookim          #+#    #+#             */
/*   Updated: 2024/11/10 14:38:09 by jihookim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	count_word(char *s, char c)
{
	size_t	count;
	int		flag;

	count = 0;
	flag = 0;
	while (*s)
	{
		if (*s != c && flag == 0)
		{
			flag = 1;
			count++;
		}
		else if (*s == c)
			flag = 0;
		s++;
	}
	return (count);
}

static char	*word_copy(char *start, char *end)
{
	char	*word;
	size_t	len;
	size_t	index;

	len = (size_t)(end - start);
	index = 0;
	word = malloc(len + 1);
	if (word == NULL)
		return (NULL);
	while (index < len)
	{
		*(word + index) = *(start + index);
		index++;
	}
	*(word + index) = '\0';
	return (word);
}

static char	**make_array(char *s, char c)
{
	char	**temp;
	size_t	num;

	num = count_word(s, c);
	temp = (char **)malloc(sizeof(char *) * (num + 1));
	if (temp == NULL)
		return (NULL);
	return (temp);
}

static char	**array_free(char **arr, size_t end_index)
{
	size_t	index;

	index = 0;
	while (index < end_index)
		free(arr[index++]);
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**temp;
	char	*start_word;
	size_t	word_index;

	temp = make_array((char *)s, c);
	if (temp == NULL)
		return (NULL);
	word_index = 0;
	while (*s)
	{
		if (*s != c)
		{
			start_word = (char *)s;
			while (*s && *s != c)
				s++;
			temp[word_index] = word_copy(start_word, (char *)s);
			if (!temp[word_index++])
				return (array_free(temp, word_index));
		}
		else
			s++;
	}
	temp[word_index] = NULL;
	return (temp);
}
