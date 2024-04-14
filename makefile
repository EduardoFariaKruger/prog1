# Makefile de exemplo (Manual do GNU Make)
     
CFLAGS = -Wall -g # flags de compilacao
CC = gcc

all: teste.o polinomios.o
	$(CC) -o teste teste.o polinomios.o -lm

polinomios.o: polinomios.c polinomios.h
	$(CC) -c $(CFLAGS) polinomios.c

teste.o: teste.c polinomios.h
	$(CC) -c $(CFLAGS) teste.c

clean:
	rm -f *.o *~ teste