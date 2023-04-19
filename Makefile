PROG=shapecalc.exe
TEST=check.exe
SOURCES=shapecalc.c calc.c shape.c rockpaperscissors.c safeinput.c 
DEPS=calc.h shape.h rockpaperscissors.h safeinput.h  
CC=gcc
CFLAGS=-Wall -std=c11
GTEST = gtest
DEBUG?=1
LIBGTEST = C:\msys64\mingw64\lib\libgtest_main.a C:\msys64\mingw64\lib\libgtest.a
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

$(TEST): rockpaperscissors.o Testrpc.o safeinput.o
		g++ -o $@ $^ $(CFLAGS) -I $(GTEST) $(LIBGTEST)

test: $(TEST)
	./$(TEST)

.PHONY: clean test

