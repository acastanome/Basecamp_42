# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acastano <acastano@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/07 17:38:09 by acastano          #+#    #+#              #
#    Updated: 2021/06/08 14:12:58 by acastano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

HEADERS = includes/

OBJS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

CFLAGS = -Wall -Werror -Wextra -c

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) $(SRCS) -I $(HEADERS)
	ar -rc $(NAME) $(OBJS)
	ranlib $(NAME)

.PHONY: clean fclean re

clean:
	rm -f $(OBJS) *.c~ *.h~

fclean: clean
	rm -f $(NAME)

re: fclean all
