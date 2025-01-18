CFLAGS=-c -g -Wall -Werror
CC=gcc
LIBS=-lm

all: student.out test.out

student.out: main.o
	$(CC) -o student.out main.o $(LIBS)

test.out: test.o
	$(CC) -o test.out test.o $(LIBS)

clean:
	rm -f *.o student.out test.out

%.o: %.c
	$(CC) $(CFLAGS) -o $@ $<
