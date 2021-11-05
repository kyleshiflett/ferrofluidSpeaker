# Variables to control Makefile operation

CC = g++
CFLAGS = -Wall -g
LIBS = stdc++
# ****************************************************
# Targets needed to bring the executable up to date
main: main.o
	$(CC) $(CFLAGS) -o main.exe main.o

# The main.o target can be written more simply
main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp -l$(LIBS)

# Clean the project
clean:
	rm *.o
	rm *.exe