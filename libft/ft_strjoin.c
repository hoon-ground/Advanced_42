/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihookim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 18:45:01 by jihookim          #+#    #+#             */
/*   Updated: 2024/11/07 19:17:16 by jihookim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s_buf;
	char	*new;
	size_t	size;
	size_t	index;

	index = 0;
	size = ft_strlen(s1) + ft_strlen(s2);
	new = malloc(size + 1);
	if (new == NULL)
		return (new);
	s_buf = (char *)s1;
	while (*(s_buf))
		*(new + index++) = *(s_buf++);
	s_buf = (char *)s2;
	while (*(s_buf))
		*(new + index++) = *(s_buf++);
	*(new + index) = '\0';
	return (new);
}
