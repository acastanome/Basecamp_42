# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dankwon <dankwon@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/15 22:04:23 by dankwon           #+#    #+#              #
#    Updated: 2021/06/16 18:21:36 by dankwon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	bsq

SOURCES	=	./src/main.c \
			./src/algo_bsq.c \
			./src/display.c \
			./src/grid.c \
			./src/struct_processing.c \
			./src/bsq.c \
			./src/input.c \
			./src/read.c

OBJECTS	=	./main.o \
			./algo_bsq.o \
			./display.o \
			./grid.o \
			./struct_processing.o \
			./bsq.o \
			./input.o \
			./read.o

FLAGS	=	-Werror -Wall -Wextra

HEADER	=	./header

$(NAME)		:	all

all			:
				gcc -c $(FLAGS) $(SOURCES) -I $(HEADER) 
				gcc -o $(NAME) $(FLAGS) $(OBJECTS)

clean		: 
				rm -rf $(OBJECTS)

fclean		:	clean
				rm -rf $(NAME)

re			:	fclean \
				all
				