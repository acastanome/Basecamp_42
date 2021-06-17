#! /bin/bash

gcc -Wall -Werror -Wextra -c ft_atoi.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_strcmp.c ft_strcpy.c ft_strlen.c ft_strlowcase.c ft_strstr.c ft_strupcase.c ft_swap.c
ar rc libft.a ft_atoi.o ft_putchar.o ft_putnbr.o ft_putstr.o ft_strcmp.o ft_strcpy.o ft_strlen.o ft_strlowcase.o ft_strstr.o ft_strupcase.o ft_swap.o
ranlib libft.a