CFLAGS=-std=gnu99 -Wall -Werror -Wextra -ggdb3
rush-1: main.o test_1.o
	gcc -o rush-1 main.o test_1.o
%.o: %.c
	gcc $(CFLAGS) -c $<
clean:
	rm -f *.o *~
