#ifndef __LINE
#define __LINE

namespace kairo{

	class Word{
	private:
		string* str;
	public:
		int len();
		string s();
	};


	class line{
	private:
		string l;
	public:
		line();
		line(string);

		void write(size_t, char);


		int length();

		string str();

	};

} /* namespace kairo */

#endif
