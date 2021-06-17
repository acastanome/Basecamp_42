# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrudez <mrudez@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/14 14:14:41 by mrudez            #+#    #+#              #
#    Updated: 2021/06/14 14:14:43 by mrudez           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
CFLAGS = -Wall -Werror -Wextra $(wildcard *.c) -o $(NAME) -I. 

all: $(NAME)

$(NAME):
	gcc $(CFLAGS)

clean:
	rm -f $(*.o)

fclean: all
	rm -f $(NAME)

re: fclean all