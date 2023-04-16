PROG=shapecalc.exe
SRC=shapecalc.c calc.c safeinput.c shape.c
CC=gcc -std=c99
CFLAGS=-g -Wall -Werror -pedantic
DEPS = shapecalc.h calc.h safeinput.h shape.h rockpaperscissors.h
OBJ = shapecalc.o safeinput.o calc.o shape.o rockpaperscissors.o
 
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
 
$(PROG): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)