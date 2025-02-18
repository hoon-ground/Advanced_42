/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihookim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 21:40:25 by jihookim          #+#    #+#             */
/*   Updated: 2024/11/01 21:52:11 by jihookim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	ft_atoi(const char *nptr)
{
	int		num;
	int		sign;
	size_t	index;

	num = 0;
	sign = 1;
	index = 0;
	while (ft_isspace(*(nptr + index)))
		index++;
	if (*(nptr + index) == '-')
		sign = -sign;
	if (*(nptr + index) == '-' || *(nptr + index) == '+')
		index++;
	while (ft_isdigit(*(nptr + index)))
	{
		num = (num * 10) + (*((char *)nptr + index) - '0');
		index++;
	}
	return (num * sign);
}
