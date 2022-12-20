CC = g++
CFLAGS = -g -Wall

console_game: main.o menu.o
	$(CC) $(CFLAGS) main.o menu.o -o console_game

main.o: main.cpp menu.h
	$(CC) $(CFLAGS) -c main.cpp

menu.o: menu.cpp menu.h
	$(CC) $(CFLAGS) -c menu.cpp

clean: 
	rm *.o
	rm console_game

run:	console_game
	./console_game
