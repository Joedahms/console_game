#ifndef MENU_H
#define MENU_H

#include <vector>
#include <string>

#include "menu_state.h"

class menu {
	private:
		menu_state* state_;
	public: 
		virtual void handle_input(int input);


		/*
		std::string get_disp_choices(int chc_idx);
		void set_disp_choices(int chc_idx, std::string new_str);
		int get_in_choices(int chc_idx);
		

		
		void set_in_choices(int chc_idx, int new_int);
		*/
};
#endif
