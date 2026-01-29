CC := gcc
CFLAGS := -W -Wall -Wshadow -pedantic

all:FUNCOES
	$(CC) $(CFLAGS) main_trabalho1.c funcoes.o -o bin_main

FUNCOES:
	$(CC) $(CFLAGS) -c funcoes.c

run: 
	./bin_main

.PHONY: clean
clean:
	rm *.o
	rm ./bin_main