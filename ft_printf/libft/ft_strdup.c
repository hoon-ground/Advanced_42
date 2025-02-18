/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihookim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:09:35 by jihookim          #+#    #+#             */
/*   Updated: 2024/11/07 17:02:39 by jihookim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*new;
	size_t	s_len;
	size_t	index;

	index = 0;
	s_len = ft_strlen(s);
	new = malloc(s_len + 1);
	if (new == NULL)
		return (new);
	while (index < s_len)
	{
		*(new + index) = *((char *)s + index);
		index++;
	}
	*(new + index) = '\0';
	return (new);
}
