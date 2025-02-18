/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unum.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihookim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 11:16:20 by jihookim          #+#    #+#             */
/*   Updated: 2024/12/31 11:16:22 by jihookim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unum(unsigned int unum, char *base)
{
	int	base_digit;
	int	cnt;

	base_digit = ft_strlen(base);
	cnt = count_digit_base(unum, base_digit);
	ft_putnbr_base(unum, base, base_digit);
	return (cnt);
}

void	ft_putnbr_base(unsigned int n, char *base, int base_digit)
{
	if (n < (unsigned int)base_digit)
	{
		write(1, &base[n], 1);
		return ;
	}
	else
	{
		ft_putnbr_base(n / base_digit, base, base_digit);
		write(1, &base[n % base_digit], 1);
	}
	return ;
}

int	count_digit_base(unsigned int n, int base)
{
	int	digit;

	digit = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		digit++;
		n /= base;
	}
	return (digit);
}

int	print_num(int n)
{
	int	cnt;

	cnt = count_digit(n);
	ft_putnbr_fd(n, 1);
	return (cnt);
}

int	count_digit(int n)
{
	int	digit;

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
