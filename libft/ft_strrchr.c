/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihookim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 19:50:59 by jihookim          #+#    #+#             */
/*   Updated: 2024/11/10 16:47:47 by jihookim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s_buf;
	size_t	index;

	s_buf = (char *)s;
	index = ft_strlen(s_buf);
	if ((unsigned char)c == 0)
		return (s_buf + index);
	while (index-- > 0)
	{
		if (*(s_buf + index) == (unsigned char)c)
			return (s_buf + index);
	}
	return (NULL);
}
