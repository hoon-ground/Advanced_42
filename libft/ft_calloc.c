/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihookim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:40:49 by jihookim          #+#    #+#             */
/*   Updated: 2024/11/07 16:08:57 by jihookim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;

	if (size != 0 && nmemb > UINT_MAX / size)
		return (NULL);
	result = malloc(nmemb * size);
	if (result == NULL)
		return (result);
	ft_bzero(result, size * nmemb);
	return (result);
}
