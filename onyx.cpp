#include "headers.hpp"
using namespace kairo;

int main(int argc, char** argv){
	win w;
	w.initCurses();
	w.listen();

	endwin();
	return 0;
}
