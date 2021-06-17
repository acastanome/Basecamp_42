# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acastano <acastano@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/10 16:13:32 by acastano          #+#    #+#              #
#    Updated: 2021/06/10 19:59:45 by acastano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRCS = *.c

HEADERS = ft.h

OBJS = *.o

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -o $(NAME) $(SRCS) -I $(HEADERS)

.PHONY: clean fclean re

clean:
	rm -f $(OBJS) *.c~ *.h~

fclean: clean
	rm -f $(NAME)

re: fclean all
