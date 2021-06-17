# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acastano <acastano@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/07 11:05:12 by oberghol          #+#    #+#              #
#    Updated: 2021/06/10 14:29:40 by acastano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
COMPILE = gcc -c -Wall -Wextra -Werror -I includes/
LIBMK = ar rcs
SRC = srcs/
SRCFILES = $(SRC)ft_putchar.c $(SRC)ft_putstr.c $(SRC)ft_strcmp.c $(SRC)ft_strlen.c $(SRC)ft_swap.c
SRCFILES_O = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o


all: $(NAME)

$(NAME):
	$(COMPILE) $(SRCFILES)
	$(LIBMK) $(NAME) $(SRCFILES_O)
clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
