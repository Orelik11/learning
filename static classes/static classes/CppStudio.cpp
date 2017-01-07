#include "stdafx.h"
#include "CppStudio.h"


class CppStudio
{
private:
	static unsigned int count;
public:
	CppStudio() { count++; }
	~CppStudio() { count--; }
	
	static unsigned int CppStudio::getCount();
};

unsigned int CppStudio::count = 0;			//define static variable

unsigned int CppStudio::getCount()			//define static function
{
	return CppStudio::count;
}