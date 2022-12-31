#ifndef MAIN_MENU_STATE_H
#define MAIN_MENU_STATE_H 

//#include "menu_machine.h" 
#include "menu_state.h"

class main_menu_state : public menu_state {
	public:
		void enter(menu_machine& menu); 
		void exit(menu_machine& menu);
		//		~menu_state();

		//		void change_state();		
//		void menu_loop();

//	private:
};

#endif
