// static classes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "CppStudio.h"


int main()
{
	CppStudio *obj1 = new CppStudio;

	std::cout << CppStudio::getCount() << std::endl;

	delete obj1;
	std::cout << CppStudio::getCount() << std::endl;

	CppStudio *obj2 = new CppStudio[10];
	std::cout << CppStudio::getCount() << std::endl;
	
	system("pause");
	return 0;
}

