CC = g++
CFLAGS = -g -Wall

console_game: main.o
	$(CC) $(CFLAGS) main.o -o console_game

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

clean: 
	rm *.o
	rm console_game

run:	console_game
	./console_game
