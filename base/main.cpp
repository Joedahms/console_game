#include "menu_machine.h"
#include "menu_state.h"
#include "main_menu_state.h"

#include <iostream>

int main(void) {

	static main_menu_state m_m_s;

	menu_machine m_m;
	m_m.state_ = &m_m_s;
	m_m.enter();
	
	return 0;
}
