CFLAGS=-std=gnu99 -Wall -Werror -Wextra -ggdb3
test: test.o ft_print_alphabet_copy.o ft_puntchar.o
	gcc -o test test.o ft_print_alphabet_copy.o ft_puntchar.o
%.o: %.c
	gcc $(CFLAGS) -c $<
clean:
	rm -f *.o *~
