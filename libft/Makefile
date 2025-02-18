# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihookim <jihookim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/10 15:47:12 by jihookim          #+#    #+#              #
#    Updated: 2024/11/10 16:18:11 by jihookim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a

CC=cc
CFLAG=-Wall -Wextra -Werror
RM=rm -f
AR=ar
ARFLAGS=crs

INCLUDES=./libft.h 

SRCS_1=ft_strlen.c		\
	ft_memset.c			\
	ft_bzero.c			\
	ft_isalnum.c		\
	ft_isalpha.c		\
	ft_isascii.c		\
	ft_isdigit.c		\
	ft_isprint.c		\
	ft_memmove.c		\
	ft_strlcpy.c		\
	ft_strlcat.c		\
	ft_toupper.c		\
	ft_tolower.c		\
	ft_strchr.c			\
	ft_strrchr.c		\
	ft_memcpy.c			\
	ft_strncmp.c		\
	ft_memchr.c			\
	ft_memcmp.c			\
	ft_strnstr.c		\
	ft_atoi.c			\
	ft_calloc.c			\
	ft_strdup.c

SRCS_2=ft_substr.c		\
	ft_strjoin.c		\
	ft_strtrim.c		\
	ft_split.c			\
	ft_itoa.c			\
	ft_strmapi.c		\
	ft_striteri.c		\
	ft_putchar_fd.c		\
	ft_putstr_fd.c		\
	ft_putendl_fd.c		\
	ft_putnbr_fd.c

SRCS	= $(SRCS_1)		\
	  $(SRCS_2)

OBJS	= $(SRCS:.c=.o)

OBJ = $(OBJS)

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAG) -c $< -o $@

clean :
	$(RM) $(RMFLAG) $(OBJ)

fclean : clean
	$(RM) $(RMFLAG) $(NAME)

re : fclean all

$(NAME) : $(OBJ)
	$(AR) $(ARFLAGS) $@ $^
	
.PHONY : all clean fclean re