# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acastano <acastano@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/07 17:38:09 by acastano          #+#    #+#              #
#    Updated: 2021/06/08 13:54:53 by acastano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

not working

NAME = libft.a

VPATH = ./srcs:./includes

FUNCTIONS = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c

SRCS = $(FUNCTIONS)

HEADERS = $(wildcard *.h)

OBJS = $(patsubst %.c, %.o, $(SRCS))

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) $(OBJS) $(HEADERS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

.PHONY: clean fclean re

clean:
	rm -f $(OBJS) *.c~ *.h~

fclean: clean
	rm -f $(NAME)

re: fclean all