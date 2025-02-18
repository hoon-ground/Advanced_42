/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihookim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 11:15:58 by jihookim          #+#    #+#             */
/*   Updated: 2024/12/31 11:16:00 by jihookim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <libft.h>

int		ft_printf(const char *av, ...);
int		print_type(const char type, va_list av_p);
int		print_str(char *str);
int		print_addr(void *addr);
int		print_unum(unsigned int unum, char *base);
void	ft_putnbr_base(unsigned int n, char *base, int base_digit);
int		count_digit_base(unsigned int n, int base);
int		print_num(int n);
int		count_digit(int n);

#endif
