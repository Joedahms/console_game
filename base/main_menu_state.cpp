#include "menu_state.h"
#include "main_menu_state.h"

#include <iostream>

//main_menu_state* main_menu_state::get() {
//	retutn &main_state_menu;
//}

void main_menu_state::enter(menu_machine& menu) {
	std::cout << "Im in main menu state" << std::endl;
}

void main_menu_state::exit(menu_machine& menu) {
	std::cout << "im exiting the main menu state" << std::endl; 
}

