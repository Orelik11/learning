// Input Output.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	cout << "Put first number: ";

	char c;
	cin >> c;

	cout << "Code of the symbol: " << (int)c << endl;
	cout << "Sum c + 1: " << (char)((int)c + 1) << endl;

	int result = 0;
	float var = 0;
	cout << "Enter var: \n";
	cin >> var;

	result = static_cast<int>(var) + 10;
	cout << "Result: " << result << endl;

	system("pause");
    return 0;
}

