#Makefile for "sapo_corrida" C++ application
#Created by Andre 19/03/2018

PROG = sapo_corrida
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

