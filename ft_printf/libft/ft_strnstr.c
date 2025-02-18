/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihookim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 21:22:33 by jihookim          #+#    #+#             */
/*   Updated: 2024/11/01 21:36:52 by jihookim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	count;
	size_t	index;

	index = 0;
	if (ft_strlen(little) == 0 || !little)
		return ((char *)big);
	while (*(big + index) && index < len)
	{
		count = 0;
		while (*(big + index + count) == *(little + count) && *(little + count))
		{
			count++;
			if (index + count >= len)
				break ;
		}
		if (count == ft_strlen(little))
			return ((char *)(big + index));
		index++;
	}
	return (NULL);
}
