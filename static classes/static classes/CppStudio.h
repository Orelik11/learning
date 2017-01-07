#pragma once

class CppStudio 
{
private:
	static unsigned int count;
public :
	CppStudio();
	~CppStudio();

	static unsigned int CppStudio::getCount();
};

