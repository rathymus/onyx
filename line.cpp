#include "headers.hpp"

namespace kairo {

	line::line(){}
	line::line(string s){l=s;}

	void line::write(size_t p, char c){
		l.insert(p, &c, 1);
	}

	
	int line::length() {return l.length();}
	string line::str() {return l;}


} /* namespace kairo */
