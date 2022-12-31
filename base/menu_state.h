#ifndef MENU_STATE_H
#define MENU_STATE_H

//#include "main_menu_state.h"
#include "menu_machine.h"

#include <cstddef>

class menu_machine;

class menu_state {
	public:
		virtual void enter(menu_machine& menu) = 0;
		virtual void exit(menu_machine& menu) = 0;
			//	virtual ~menu_state();

		//virtual void change_state();
	//	virtual void menu_loop() = 0;
	
	protected:
		menu_state* curr_state = NULL;
		menu_state* next_state = NULL;
};

#endif
