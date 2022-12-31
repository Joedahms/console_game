#ifndef MENU_MACHINE_H
#define MENU_MACHINE_H

#include "menu_state.h"

class menu_state;

class menu_machine {
	public:
		menu_state* state_;
		void enter();
		void exit();
	//	~menu_state();

		//void menu_loop();
//	protected:
	


		
};

#endif
