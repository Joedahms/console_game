#include "menu_machine.h"

void menu_machine::enter() {
	state_->enter(*this);
}

void menu_machine::exit() {
	state_->exit(*this);
}

