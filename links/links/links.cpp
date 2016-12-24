// links.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int value = 15;
	int &refer = value;

	cout << "value = " << value << endl;
	cout << "reference  = " << refer << endl;

	refer += 15;

	cout << "value = " << value << endl;
	cout << "reference  = " << refer << endl;

	system("pause");
    return 0;
}

