# makefile
CC = g++
CFLAGS = -Wall

all : employee_test

employee_test : employee.o
	$(CC) $(CFLAGS) main.cpp -o emptest employee.o

employee.o : employee.cpp employee.h
	$(CC) $(CFLAGS) -c employee.cpp

clean : 
	rm -rf emptest *.o
