CC=gcc
CFLAGS=-g -Wall
LFLAGS=-lm

run: lib.o main.c
	$(CC) $(CFLAGS) -o run lib.o main.c $(LFLAGS)
test: lib.o test.c
	$(CC) $(CFLAGS) -o test lib.o test.c $(LFLAGS) -lcheck
lib.o: lib.c
	$(CC) $(CFLAGS) -c lib.c $(LFLAGS)
clean:
	rm -f *.o run test
