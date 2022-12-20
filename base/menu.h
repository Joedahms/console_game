#ifndef MENU_H
#define MENU_H

#include <vector>
#include <string>

class menu {
	protected:
		std::vector<std::string> disp_choices;
		std::vector<int> in_choices;

	public: 
		virtual void fill_choices() = 0;
		virtual void run_menu() = 0;

		std::string get_disp_choices(int chc_idx);
		void set_disp_choices(int chc_idx, std::string new_str);
		int get_in_choices(int chc_idx);
		void set_in_choices(int chc_idx, int new_int);
};
#endif
