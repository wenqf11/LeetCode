CC = g++
CFLAGS  = -g -Wall -std=c++11

all: main

main: main.o
	$(CC) ${CFLAGS} -o main main.o 
main.o: main.cpp solution.h
	$(CC) ${CFLAGS} -c main.cpp

clean:
	rm -rf *.o main

run:
	./main
