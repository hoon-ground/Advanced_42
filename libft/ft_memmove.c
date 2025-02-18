/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihookim <jihookim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:42:41 by jihookim          #+#    #+#             */
/*   Updated: 2024/11/01 18:01:55 by jihookim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_buf;
	unsigned char	*src_buf;
	size_t			index;

	dest_buf = (unsigned char *)dest;
	src_buf = (unsigned char *)src;
	if (dest == src)
		return (dest_buf);
	if (dest_buf < src_buf)
	{
		index = 0;
		while (index < n)
		{
			*(dest_buf + index) = *(src_buf + index);
			index++;
		}
	}
	else
	{
		while (n-- > 0)
			*(dest_buf + n) = *(src_buf + n);
	}
	return (dest);
}
