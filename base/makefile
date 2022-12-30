CC = g++
CFLAGS = -g -Wall

console_game: main.o menu_machine.o menu_state.o main_menu_state.o
	$(CC) $(CFLAGS) main.o menu_machine.o menu_state.o main_menu_state.o -o console_game

main.o: main.cpp menu_state.h menu_machine.h main_menu_state.h
	$(CC) $(CFLAGS) -c main.cpp

menu_machine.o: menu_machine.h menu_machine.cpp
	$(CC) $(CFLAGS) -c menu_machine.cpp

menu_state.o: menu_state.cpp menu_state.h
	$(CC) $(CFLAGS) -c menu_state.cpp

main_menu_state.o: main_menu_state.h main_menu_state.cpp
	$(CC) $(CFLAGS) -c main_menu_state.cpp

clean: 
	rm *.o
	rm console_game

run:	console_game
	./console_game
