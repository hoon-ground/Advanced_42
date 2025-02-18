/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihookim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 20:45:05 by jihookim          #+#    #+#             */
/*   Updated: 2024/11/01 20:48:06 by jihookim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_buf;
	size_t			index;

	index = 0;
	s_buf = (unsigned char *)s;
	while (index < n)
	{
		if (*(s_buf + index) == (unsigned char)c)
			return (s_buf + index);
		index++;
	}
	return (NULL);
}
