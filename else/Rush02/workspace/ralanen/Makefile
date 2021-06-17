# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/12 08:31:55 by ralanen           #+#    #+#              #
#    Updated: 2021/06/12 08:34:54 by ralanen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = 
INCLUDES = protos.h
FUNCTIONS = 
OBJECTS = 

all:	compile

compile:
	gcc -Wall -Wextra -Werror -c $(FUNCTIONS) -I$(INCLUDES)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all