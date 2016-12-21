// p2point.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int **parr = new int* ;

	cout << "How much strings should be in array?\n";
	int size = 0;
	cin >> size;

	for (int i = 0; i < size; i ++ )
	{
		parr = new int* (0);
	}

	for (int i = 0; i < size; i++)
	{
		cout << "Parr [" << i << "] = ";
		cin >> *parr[1+i];
	}

	for (int i = 0; i < size; i++)
	{
		cout << "Parr [" << i << "] = " << *parr[i];
	}

	for (int i = 0; i < size; i++)
	{
		delete parr[i];
	}

	delete [] parr;

	system("pause");
    return 0;
}

