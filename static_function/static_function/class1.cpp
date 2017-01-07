#include "stdafx.h"
#include "class1.h"

class CppStudio
{
private:
	int class_counter = 0;
public:
	CppStudio()		{	++class_counter;	}
	~CppStudio()	{	--class_counter;	}
};

static int getClassNumber()
{
	return class_counter;
}