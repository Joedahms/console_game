#include "menu_machine.h"
#include "menu_state.h"
#include "main_menu_state.h"

#include <iostream>

int main(void) {
	static main_menu_state m_m_s;
	menu_state.state_ = &menu_state::m_m_s;
	menu_state.enter();
	
	return 0;
}
