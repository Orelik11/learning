// array in function.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int fill_array(unsigned int , unsigned int);

int main()
{
	unsigned int _rows(0), _col(0);
	cout << "Enter number of rows: ";
	cin >> _rows;
	cout << "Enter number of columns: ";
	cin >> _col;

	int **_array = new int* [_rows]; // create array of rows
	for (unsigned int i = 0; i < _rows; i++)
	{
		_array[i] = new int[_col];
		// each i-th pointer is now pointing to dynamic array (size 10) of actual int values
	}

	//fill it
	_array = fill_array(_rows,_col);

	system("pause");
    return 0;
}

int fill_array(unsigned int rows, unsigned int col)
{
	
}