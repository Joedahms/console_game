#ifndef MENU_STATE_H
#define MENU_STATE_H

#include "menu_machine.h"
#include "menu_state.h"

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
