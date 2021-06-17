# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/14 12:54:47 by wvaisane          #+#    #+#              #
#    Updated: 2021/06/16 20:36:46 by spuustin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	bsq
SCR	= srcs/
INCLUDES = includes/
FUNCTIONS = ft_putchar ft_putnbr ft_putstr ft_strlen ft_strncpy ft_atoi create_grid main pick_foe pick_x pick_y fill print

all: $(NAME)

$(NAME):
		gcc -o bsq $(patsubst %, $(SCR)%.c, $(FUNCTIONS)) -I$(INCLUDES)

clean:
		rm -f a.out core

fclean: clean
		rm -rf $(NAME)
