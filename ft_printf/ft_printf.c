/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihookim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 11:15:41 by jihookim          #+#    #+#             */
/*   Updated: 2025/01/17 18:00:25 by jihookim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	av_p;
	int		count;

	count = 0;
	va_start(av_p, format);
	while (*format)
	{
		if (*format == '%')
			count += print_type(*(++format), av_p);
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(av_p);
	return (count);
}

int	print_type(const char type, va_list av_p)
{
	int	count;

	count = -1;
	if (type == 'd' || type == 'i')
		count = print_num(va_arg(av_p, int));
	if (type == 'c')
	{
		count = 1;
		ft_putchar_fd(va_arg(av_p, int), 1);
	}
	if (type == 's')
		count = print_str(va_arg(av_p, char *));
	if (type == 'x')
		count = print_unum(va_arg(av_p, unsigned int), "0123456789abcdef");
	if (type == 'X')
		count = print_unum(va_arg(av_p, unsigned int), "0123456789ABCDEF");
	if (type == 'u')
		count = print_unum(va_arg(av_p, unsigned int), "0123456789");
	if (type == 'p')
		count = print_addr(va_arg(av_p, void *));
	if (type == '%')
		count = write(1, "%", 1);
	return (count);
}

int	print_str(char *str)
{
	int	count;

	count = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[count])
		write(1, &str[count++], 1);
	return (count);
}

int	print_addr(void	*addr)
{
	unsigned long	u_addr;
	char			buf[18];
	int				index;

	index = 17;
	ft_memset(buf, 0, 18);
	u_addr = (unsigned long)addr;
	if (!u_addr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	while (u_addr > 0)
	{
		buf[index--] = "0123456789abcdef"[u_addr % 16];
		u_addr /= 16;
	}
	buf[index--] = 'x';
	buf[index] = '0';
	write(1, &buf[index], 18 - index);
	return (18 - index);
}
