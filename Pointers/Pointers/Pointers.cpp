// Pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int i = 3;
	int *a = new int(i);

	cout << "i = " << i << ", \t*a = " << *a << endl;
	cout << "&i = " << &i << ", \ta = " << a << endl;


	system("pause");
    return 0;
}

