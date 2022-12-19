#include "menu.h"

#include <vector>
#include <string>

std::string menu::get_disp_choices(int chc_idx) {
	std::string temp_choice;
	temp_choice = this.disp_choices.at(chc_idx);
	return temp_choice;
}

void menu::set_disp_choices(int chc_idx, std::string new_str) {
	this.disp_choices[chc_idx] = new_str;
}	

std::string menu::get_in_choices(
