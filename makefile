CC=gcc
CFLAGS=-g -Wall
LFLAGS=-lm

run: lib.o main.c
	$(CC) $(CFLAGS) -fprofile-arcs -ftest-coverage -o run lib.o main.c $(LFLAGS)
test: lib.o test.c
	$(CC) $(CFLAGS) -fprofile-arcs -ftest-coverage -o test lib.o test.c $(LFLAGS)
lib.o: lib.c
	$(CC) $(CFLAGS) -fprofile-arcs -ftest-coverage -c lib.c $(LFLAGS)
clean:
	rm -f *.o run test
