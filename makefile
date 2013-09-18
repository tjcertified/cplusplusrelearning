# Use g++ for all projects
CC=g++

# FLAGS
CFLAGS=-Wall 

all : hello

hello : 
	$(CC) $(CFLAGS) simpleclass.cpp -o hello

clean :
	rm -rf simpleclass a.out hello
