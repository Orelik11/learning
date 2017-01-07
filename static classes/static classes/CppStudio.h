#pragma once

class CppStudio 
{
private:
	static unsigned int count;
public :
	CppStudio()		{ count++; }
	~CppStudio()	{ count--; }

	static unsigned int CppStudio::getCount()
	{
		return CppStudio::count;
	}
};

unsigned int CppStudio::count = 0;