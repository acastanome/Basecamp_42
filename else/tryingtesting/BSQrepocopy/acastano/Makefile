# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acastano <acastano@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/15 10:34:18 by acastano          #+#    #+#              #
#    Updated: 2021/06/15 10:38:34 by acastano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRCS = *.c

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):	$(OBJS)
	gcc $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f *.o *.c~ *.h~

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
