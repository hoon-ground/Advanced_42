/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihookim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 21:11:09 by jihookim          #+#    #+#             */
/*   Updated: 2024/11/01 21:21:39 by jihookim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_buf;
	unsigned char	*s2_buf;
	size_t			index;

	if (n == 0)
		return (0);
	index = 0;
	s1_buf = (unsigned char *)s1;
	s2_buf = (unsigned char *)s2;
	while (index < n)
	{
		if (*(s1_buf + index) != *(s2_buf + index))
			return (*(s1_buf + index) - *(s2_buf + index));
		index++;
	}
	return (0);
}
