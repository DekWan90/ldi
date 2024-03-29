#ifndef VERSION_H
#define VERSION_H

namespace AutoVersion{

	//Date Version Types
	static const char DATE[] = "13";
	static const char MONTH[] = "12";
	static const char YEAR[] = "2019";
	static const char UBUNTU_VERSION_STYLE[] =  "19.12";

	//Software Status
	static const char STATUS[] =  "Alpha";
	static const char STATUS_SHORT[] =  "a";

	//Standard Version Type
	static const long MAJOR  = 1;
	static const long MINOR  = 0;
	static const long BUILD  = 9;
	static const long REVISION  = 33;

	//Miscellaneous Version Types
	static const long BUILDS_COUNT  = 19;
	#define RC_FILEVERSION 1,0,9,33
	#define RC_FILEVERSION_STRING "1, 0, 9, 33\0"
	static const char FULLVERSION_STRING [] = "1.0.9.33";

	//These values are to keep track of your versioning state, don't modify them.
	static const long BUILD_HISTORY  = 9;


}
#endif //VERSION_H
