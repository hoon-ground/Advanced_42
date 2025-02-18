/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihookim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 20:37:58 by jihookim          #+#    #+#             */
/*   Updated: 2024/11/01 20:44:36 by jihookim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s1_buf;
	unsigned char	*s2_buf;

	s1_buf = (unsigned char *)s1;
	s2_buf = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n > 0 && (*s1_buf || *s2_buf))
	{
		if (*s1_buf != *s2_buf)
			return (*s1_buf - *s2_buf);
		s1_buf++;
		s2_buf++;
		n--;
	}
	return (0);
}
