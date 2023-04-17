PROG=shapecalc.exe
SOURCES=shapecalc.c calc.c shape.c rockpaperscissors.c safeinput.c 
DEPS=calc.h shape.h rockpaperscissors.h safeinput.h  
CC=gcc
CFLAGS=-Wall -std=c11

DEBUG?=1
ifeq ($(DEBUG), 1)
		CFLAGS += -g
		OUTPUTDIR=bin/debug
		PROG=shapecalc-debug.exe
else
		CFLAGS += -g0 -O3
		OUTPUTDIR=bin/release
endif

OBJS =  $(addprefix $(OUTPUTDIR)/,$(SOURCES:.c=.o))

$(PROG): $(OUTPUTDIR) $(OBJS) 
		$(CC) $(CFLAGS) -o $(PROG) $(OBJS)

$(OUTPUTDIR)/%.o: %.c $(DEPS)
		$(CC) $(CFLAGS) -o $@ -c $< 

clean:
		@del /q "$(OUTPUTDIR)" 
		@del /q $(PROG)

$(OUTPUTDIR):
		@mkdir "$(OUTPUTDIR)"

.PHONY: clean

