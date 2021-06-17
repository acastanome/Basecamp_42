CFLAGS=-std=gnu99 -Wall -Werror -Wextra -ggdb3
rush-1: main.o sudoku.o ft_putchar.o ft_putstr.o
	gcc -o rush-1 main.o sudoku.o ft_puntchar.o ft_putstr.o
%.o: %.c
	gcc $(CFLAGS) -c $<
clean:
	rm -f *.o *~
