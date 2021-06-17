# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lonnguye <lonnguye@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/10 16:41:04 by lonnguye          #+#    #+#              #
#    Updated: 2021/06/10 16:50:48 by lonnguye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRCS = ./srcs/functions.c ./srcs/main.c

INCL = ./includes/

all: $(NAME)

$(NAME):
		gcc -Wall -Wextra -Werror -I $(INCL) $(SRCS) -o $(NAME)

clean:
	rm -f *.o
	
fclean: clean
	rm -f $(NAME)
