// gets.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	char string[] = "This is the string  - ";
	cout << "Enter the string: ";
	char in_string[400];
	gets_s(in_string, 400);

	cout << string << in_string << endl;

	system("pause");
    return 0;
}

