CC = gcc
CFLAGS = -Wall -g

main : main.o prime.o gcd.o

main.o : main.c prime.h gcd.h

gcd.o : gcd.c gcd.h

prime.o : prime.c prime.h

.PHONY : clean
clean:
	rm -f *.o main core

.PHONY : all
all: clean main
