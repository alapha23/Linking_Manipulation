all: main

main: foo.o bar.o
	gcc foo.o bar.o -o main

foo.o: foo.c
	gcc -c foo.c

bar.o: bar.c
	gcc -c bar.c

clean:
	rm *o main
