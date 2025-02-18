/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihookim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 14:38:35 by jihookim          #+#    #+#             */
/*   Updated: 2024/11/10 14:54:35 by jihookim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	count_digit(int n)
{
	size_t	digit;

	digit = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		digit += 2;
		n = (n / 10) * -1;
	}
	while (n > 0)
	{
		digit++;
		n /= 10;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	char			*arr;
	size_t			digit;
	unsigned int	num;

	digit = count_digit(n);
	arr = malloc(digit + 1);
	if (arr == NULL)
		return (NULL);
	num = (unsigned int)n;
	if (n < 0)
	{
		arr[0] = '-';
		num *= -1;
	}
	if (n == 0)
		arr[0] = '0';
	arr[digit--] = '\0';
	while (num > 0)
	{
		arr[digit--] = (num % 10) + '0';
		num /= 10;
	}
	return (arr);
}
