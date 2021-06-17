# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acastano <acastano@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/12 11:20:47 by acastano          #+#    #+#              #
#    Updated: 2021/06/14 09:09:10 by acastano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2

SRCS = *.c

HEADERS = *.h

CFLAGS = -Wall -Werror -Wextra -c

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -o $(NAME) $(SRCS) -I $(HEADERS)

.PHONY: clean fclean re

clean:
	rm -f *.o *.c~ *.h~

fclean: clean
	rm -f $(NAME)

re: fclean all
