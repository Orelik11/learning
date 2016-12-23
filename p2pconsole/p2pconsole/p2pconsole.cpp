// p2pconsole.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void show_array(int (**array_2dim),unsigned int rows, unsigned int cols) // output for 2-dimension array
{
	cout << endl;
	for (unsigned int i = 0; i < rows; i++)
	{
		for (unsigned int j = 0; j < cols; j++)
		{
			cout << array_2dim[i][j] << '\t';
		}
		cout << endl;
	}
}


int main()
{
	unsigned int col(0), row = 0;

	int **arr_2dim = 0; // 2-dimension array

	cout << "Enter number of rows: ";
	cin >> row;
	cout << "Enter number of columns: ";
	cin >> col;

	arr_2dim = new int*[row];

	for (unsigned int i = 0; i < row; i++)
	{
		int *tmp_arr = new int[col];
		unsigned int _cin(0);
		cout << "Fill the row #" << i << ": \n";

		for (unsigned int j = 0; j < col; j++)
		{
			cout << "Column " << j << " from " << col << ": ";
			cin >> _cin;
			tmp_arr[j] = _cin;
		}
		arr_2dim[i] = tmp_arr;
	}

	cout << "Finished!\nDo you want to show the array? Yes\\No\n";
	char show = 'Y';
	cin >> show;
	if ((show == 'y') || (show == 'Yes') || (show == 'Y') || (show == 'yes'))
	{
		show_array(arr_2dim, row, col);
	}
	else
	{
		cout << "Bye, see you soon!\n";
	}
		


	system("pause");
    return 0;
}

