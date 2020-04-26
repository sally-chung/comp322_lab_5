# Name: Sally Chung
# Project: Lab 5: Paging.

EXECUTABLES=offset
SRC=offset.c
OBJ=offset.o

CC=gcc
CFLAGS=-g

all: $(EXECUTABLES)

	$(EXECUTABLES): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)
	$(CC) $(CFLAGS) -o $@ $(OBJ)

dining-p: dining-p.c
	gcc -g -c offset.c
	gcc -g -o $@ offset.o -lpthread -lrt

clean:
	rm -f $(EXECUTABLES) $(OBJ) 