#include "headers.hpp"

#ifndef __BUFFER
#define __BUFFER

namespace kairo {

	class buffer{
	private:
		bool is_writeable;
		bool is_modified;
		string filename;
		fstream fl;
		vector<kairo::line> lines;

	public:

		buffer();

		void setFile(string f);
		/**
		 * x is the column, y is the line
		 */
		void insert(UINT, UINT, char);

		int getTotalLines();

		int getLastColumn(int);

		bool getWriteable();
		bool getModified();
		void setModified();

		void deleteLine(UINT);
		void deleteLineRegion(UINT, UINT, UINT);

		/**
		 * Inserts a new line (\n) at specified location.
		 * If argument is more than total lines, a new line is
		 * appended at the end
		 */
		void insertNewLine(UINT);

		~buffer();
	};
} /* namespace kairo */

#endif
