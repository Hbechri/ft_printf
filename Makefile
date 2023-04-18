# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/01 20:36:51 by hbechri           #+#    #+#              #
#    Updated: 2022/12/02 18:32:44 by hbechri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  libftprintf.a
CC = cc
AR = ar
CFLAGS = -Wall -Wextra -Werror
ARFLAGS = rc
SRCS = ft_putchar.c ft_putnbr.c ft_putstr.c ft_putunsigned_nbr.c ft_printf.c ft_hex_upper.c \
		ft_hex_lower.c ft_hex_ptr.c

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
		$(AR) $(ARFLAGS) $(NAME) $(OBJS)
clean :
	rm -rf $(OBJS)
fclean : clean
	rm -rf $(NAME)
re : fclean all