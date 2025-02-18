/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihookim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 19:16:54 by jihookim          #+#    #+#             */
/*   Updated: 2024/11/10 16:46:21 by jihookim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*s_buf;
	size_t	index;

	index = 0;
	s_buf = (char *)s;
	while (*(s + index))
	{
		if (*(s_buf + index) == (unsigned char)c)
			return (s_buf + index);
		index++;
	}
	if ((unsigned char)c == 0)
		return (s_buf + index);
	return (NULL);
}
