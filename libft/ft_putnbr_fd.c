/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihookim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 15:14:47 by jihookim          #+#    #+#             */
/*   Updated: 2024/11/10 15:19:14 by jihookim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static void	recursive_putnbr(int n, int fd)
{
	char	c;

	if (n < 10)
	{
		c = n + '0';
		ft_putchar_fd(c, fd);
		return ;
	}
	else
	{
		recursive_putnbr((n / 10), fd);
		c = (n % 10) + '0';
		ft_putchar_fd(c, fd);
	}
	return ;
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == INT_MIN)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	recursive_putnbr(n, fd);
}
