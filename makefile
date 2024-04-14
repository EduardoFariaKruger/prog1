# Makefile de exemplo (Manual do GNU Make)
     
CFLAGS = -Wall -g # flags de compilacao
CC = gcc

all: tp1.o polinomios.o
	$(CC) -o tp1 tp1.o polinomios.o -lm

polinomios.o: polinomios.c polinomios.h
	$(CC) -c $(CFLAGS) polinomios.c

tp1.o: tp1.c polinomios.h
	$(CC) -c $(CFLAGS) tp1.c

clean:
	rm -f *.o *~ tp1