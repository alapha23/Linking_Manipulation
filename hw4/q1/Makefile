CC = gcc
CFLAGS = -O
OBJS = foo.o bar.o

all: main

main: $(OBJS)
	$(CC) foo.o bar.o foo_dep1.o foo_dep2.o bar_dep1.o bar_dep2.o -o main
foo.o: foo.c foo_dep1.o foo_dep2.o 
	gcc -c foo.c foo.h
foo_dep1.o: foo_dep1.c
	$(CC) -c foo_dep1.c 
foo_dep2.o: foo_dep2.c
	$(CC) -c foo_dep2.c 
bar.o: bar.c bar_dep1.c bar_dep2.c
	$(CC) -c bar.c bar.h bar_dep1.c bar_dep2.c
clean:
	rm *o main
