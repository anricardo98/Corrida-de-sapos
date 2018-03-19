#Makefile for "pulo_do_sapo" C++ application
#Created by Hand 22/02/2017

PROG = pulo_do_sapo
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic
OBJS = main.o corrida.o

$(PROG): $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

main.o:
	$(CC) $(CPPFLAGS) -c main.cpp

corrida.o: corrida.hpp
	$(CC) $(CPPFLAGS) -c corrida.cpp

clean:
	rm -f *.o
