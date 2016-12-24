// rand number.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;


int main()
{
	srand(time(0));

	float *ptrarray = new float[10];
	for (int i = 0; i < 10; i++)
		ptrarray[i] = (rand() % 10 + 1) / float(rand() % 10 + 1); // fill the array

	cout << "array = \n";
	for (int i = 0; i < 10; i++)
	{
		cout << setprecision(2) << ptrarray[i] << '\t';
		if (i == 4)
			cout << endl;
	}
	cout << endl;

	delete[] ptrarray;


	system("pause");
    return 0;
}

