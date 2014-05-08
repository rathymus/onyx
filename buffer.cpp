#include "buffer.hpp"

namespace kairo{

	buffer::buffer(){
		is_writeable=true;
		is_modified=false;

	}

/**
 * x is the column, y is the line
 */
	void buffer::insert(UINT x, UINT y, char c){
		assert(x>=0);
		assert(y>=0);
//	string & current;

		//Check if we're adding a new line
		if(x==0 && y==lines.size()+1){
			lines.emplace_back("\n");
		}

		lines.at(y).write(x, c);
	}


	void buffer::insertNewLine(UINT y){
		y= y>lines.size() ? lines.size()+1 : y;

		if(y==lines.size()+1){
			lines.emplace_back("\n");
			return;
		}

		lines.emplace(lines.begin()+y, "\n");
	}


	int buffer::getTotalLines() {return lines.size();}

	int buffer::getLastColumn(int l){
		int ret=0;
		try{
			ret=(lines.at(l)).length();

		}catch(exception &e){ret=0;}
		return ret;
	}

	bool buffer::getWriteable() {return is_writeable;}
	bool buffer::getModified()	 {return is_modified;}
	void buffer::setModified()	 {is_modified=true;}

	void buffer::setFile(string f){
		if(f.empty())
			return;

		filename=f;
		filename.shrink_to_fit();
		fl.open(filename);
		if(!fl.is_open())
			return;

	}

	void buffer::deleteLine(UINT y){
		assert(y>=0 && y<lines.size());

		lines.erase(lines.begin()+y);
	}

	void buffer::deleteLineRegion(UINT y, UINT s, UINT e){

	}

	buffer::~buffer(){
		endwin();
	}

} /* namespace kairo */
