// 2dimmassiv.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

void show_array(int**, const int, const int);

int main()
{
	srand(time(0));

	int row = 0, col = 0;
	cout << "put row: ";
	cin >> row;
	cout << "put col: ";
	cin >> col;
	int **dim = new int*[row];

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			dim[row] = new int[j];
	}

	//fill the array
	for (int i = 0; i< row; i++)
	{
		int *tmp_array = new int[col];
		for (int j = 0; j < col;j ++)
		{
			int tmp = int(rand() % 100 + 1);
			tmp_array[j] = tmp;
			dim[i] = tmp_array;
		}
	//	delete[] tmp_array;
	}

	show_array(dim,row,col);

	for (int i = 0; i < row; i++) 
	{
		delete[] dim[i];
	}
	//delete [] dim;

	system("pause");
    return 0;
}

void show_array (int (**dim), int row, int col)
{
	cout << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << dim[i][j] << '\t';
		}
		cout << endl;
	}
}