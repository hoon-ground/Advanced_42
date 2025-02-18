/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihookim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:02:05 by jihookim          #+#    #+#             */
/*   Updated: 2024/11/01 18:33:49 by jihookim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	index;

	index = 0;
	src_len = ft_strlen(src);
	if (!size || !dst)
		return (src_len);
	while (index + 1 < size && *(src + index))
	{
		*(dst + index) = *(src + index);
		index++;
	}
	*(dst + index) = '\0';
	return (src_len);
}
