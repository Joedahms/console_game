CC = g++
CFLAGS = -g -Wall

console_game: main.o menu.o
	$(CC) $(CFLAGS) main.o menu.o -o console_game

main.o: main.cpp menu_state.h menu_macin
	$(CC) $(CFLAGS) -c main.cpp

menu_state.o: menu_state.cpp menu_state.h
	$(CC) $(CFLAGS) -c menu_state.cpp

clean: 
	rm *.o
	rm console_game

run:	console_game
	./console_game
