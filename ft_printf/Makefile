# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihookim <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/17 15:11:05 by jihookim          #+#    #+#              #
#    Updated: 2025/01/17 18:25:59 by jihookim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

LIBFTDIR	= ./libft
LIBFTFILE	= libft.a

CC		= cc
CFLAG	= -Wall -Wextra -Werror
RM		= rm
RMFLAG	= -f
AR		= ar
ARFLAG	= crs

INCLUDE	= ./ft_printf.h

SRCS	= ft_printf.c	\
		  ft_printf_plus.c

OBJS	= $(SRCS:.c=.o)

%.o: %.c
	$(CC) $(CFLAG) -c $< -I$(LIBFTDIR) -o $@

all: $(NAME)

$(NAME): $(OBJS)
	make -C $(LIBFTDIR)
	cp $(LIBFTDIR)/$(LIBFTFILE) $(NAME)
	$(AR) $(ARFLAG) $@ $?

clean:
	make -C $(LIBFTDIR) clean
	$(RM) $(RMFLAG) $(OBJS)

fclean: clean
	make -C $(LIBFTDIR) fclean
	$(RM) $(RMFLAG) $(NAME)

re: fclean all

.PHONY: all clean fclean re
