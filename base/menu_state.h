#ifndef MENU_STATE_H
#define MENU_STATE_H

class menu_state {
	public:
		virtual ~menu_state() {}
		virtual void handle_input(menu& lmenu, int input);

		static main_menu_state main_menu_obj;
		static load_state load_obj;
};

#endif
