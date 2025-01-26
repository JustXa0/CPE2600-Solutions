CFLAGS=-c -g -Wall -Werror
CC=gcc

all: vector_math

vector_math: main.o vector.o
	$(CC) -o vector_math main.o vector.o

clean:
	rm -f *.o vector_math

%.o: %.c
	$(CC) $(CFLAGS) -o $@ $<
