#ifndef __WIN
#define __WIN

namespace kairo {

	class win{
	private:
		int max_x;
		int max_y;
		int min_x;
		buffer buff;
		pointer p;
	public:
		win();
		void initCurses();
		void listen();
		void handle_input(char);
		void drawLineNumbers();
		int getMaxY();
		int getMaxX();
	};

} /* namespace kairo */

#endif


