/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihookim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 14:55:39 by jihookim          #+#    #+#             */
/*   Updated: 2024/11/10 15:02:50 by jihookim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*temp;
	size_t	s_len;
	size_t	index;

	s_len = ft_strlen(s);
	temp = malloc(s_len + 1);
	if (temp == NULL)
		return (NULL);
	index = 0;
	while (index < s_len)
	{
		temp[index] = f(index, *(s + index));
		index++;
	}
	temp[index] = '\0';
	return (temp);
}
