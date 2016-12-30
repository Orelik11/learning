// math.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <fstream>
#include <string>

using namespace std;


int main()
{
	double *a = new double(0); // variable a
	double *b = new double(0); // variable b
	string* _fname = new string("");

	cout << "Enter name of file: ";
	cin >> *_fname;

	fstream file(*_fname, ios_base::out); // open file and write there all output
	if (file.is_open())
	{
		
	}
	else cout << "Couldn't create file " << *_fname << endl;


	system("pause");
    return 0;
}

