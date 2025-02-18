/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihookim <jihookim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:42:11 by jihookim          #+#    #+#             */
/*   Updated: 2024/11/01 17:42:01 by jihookim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_buf;
	unsigned char	*src_buf;
	size_t			index;

	if (!dest && !src)
		return (NULL);
	index = 0;
	dest_buf = (unsigned char *)dest;
	src_buf = (unsigned char *)src;
	while (index < n)
	{
		*(dest_buf + index) = *(src_buf + index);
		index++;
	}
	return (dest);
}
