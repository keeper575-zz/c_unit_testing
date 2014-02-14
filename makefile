CC=gcc
CFLAGS=-g
LFLAGS=-lm

run: lib.o main.c
	$(CC) $(CFLAGS) -o run lib.o main.c $(LFLAGS)
lib.o: lib.c
	$(CC) $(CFLAGS) -c lib.c $(LFLAGS)
clean:
	rm -f *.o run
