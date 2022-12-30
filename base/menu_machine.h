#ifndef MENU_MACHINE_H
#define MENU_MACHINE_H



class menu_machine {
	public:
		void enter();
		void exit();
	//	~menu_state();

		//void menu_loop();
	protected:
		menu_state* state_;


		
};

#endif
