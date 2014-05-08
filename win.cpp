#include "headers.hpp"

namespace kairo{

	win::win(){
		// this->buff=new buffer(NULL);
		return;
	}

	void win::initCurses(){
		initscr();
		keypad(stdscr, TRUE);
		noecho();
		cbreak();
		getmaxyx(stdscr, max_y, max_x);
	}

	void win::listen(){
		while(true)
			handle_input(getch());
	}

	void win::handle_input(char c){

		if(c>=32 && c<127){
			addch(c);
			refresh();
		}
	}

	void win::drawLineNumbers(){

	}

	int win::getMaxX() {return max_x;}
	int win::getMaxY() {return max_y;}


}
