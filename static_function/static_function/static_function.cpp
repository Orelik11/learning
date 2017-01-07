// static_function.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "class1.h"
#include <iostream>

using namespace std;

int main()
{
	cout << CppStudio::getClassNumber() << endl;


	CppStudio *obj = new CppStudio;
	cout << CppStudio::getClassNumber() << endl;

	CppStudio *cpp = new CppStudio[10];

	cout << CppStudio::getClassNumber() << endl;


	system("pause");
    return 0;
}