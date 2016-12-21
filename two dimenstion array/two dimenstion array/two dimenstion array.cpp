// two dimenstion array.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
	int col, row;

	cout << "Entern number of rows: ";
	cin >> row;
	int **parr;

	cout << "Enter number of columns: ";
	cin >> col;
	parr = new int*[row];

	cout << "Please fill 2-dimension array:\n";
	for (int i = 0; i < row; i++)
	{
		int *tmp_parr = new int[col];

		for (int j = 0; j < col; j++)
		{
			int temp = 0;
			cout << "Fill a[" << i << "][" << j << "]: ";
			cin >> temp;
			tmp_parr[j] = temp;
		}
		parr[i] = tmp_parr;
	}
	cout << endl;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << parr[i][j] << '\t';
		}
		cout << endl;
	}

	for (int i = 0; i< row; i++)
	{
		delete[] parr[i];
	}
	delete[] parr;

	system("pause");
    return 0;
}

