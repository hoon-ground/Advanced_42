/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihookim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:23:00 by jihookim          #+#    #+#             */
/*   Updated: 2024/11/07 17:57:19 by jihookim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	index;
	char			*sub_s;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_calloc(1, 1));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	sub_s = malloc(len + 1);
	if (sub_s == NULL)
		return (NULL);
	index = 0;
	while (index < (unsigned int)len && *(s + start + index))
	{
		*(sub_s + index) = *(s + start + index);
		index++;
	}
	*(sub_s + index) = '\0';
	return (sub_s);
}
