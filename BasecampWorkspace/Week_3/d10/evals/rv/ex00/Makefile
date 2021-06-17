CC = gcc
NAME = libft.a
FLAGS = -Wall -Wextra -Werror -c 
PATH = srcs/
HEADERS = includes/
MAKELIB = ar rc
SRCFILES = $(PATH)ft_putchar.c $(PATH)ft_putstr.c $(PATH)ft_strcmp.c \
$(PATH)ft_strlen.c $(PATH)ft_swap.c
OBJECT = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o 

all: $(NAME)

$(NAME): $(OBJECT)
	$(MAKELIB) $(NAME) $(OBJECT)

$(OBJECT):
	$(CC) $(FLAGS) $(SRCFILES) -I$(HEADERS)

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)

re: fclean all
