// task1dynamicAraay.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int val = 0, count = 0;
	int *_array = new int [1];
	int *_tmp = 0; // temporary array while deleting and creating again _array[]

do	{
	cout << "\nEnter number. Enter negative number to close session: ";
	cin >> val;
	if (val >0)
	{
		_array[count] = val; // put value in last point in array
		count++;

		//copy _array to _tmp
		_tmp = new int[count];
		for (int i = 0; i < count; i++)
		{
			_tmp[i] = _array[i];
		}
		delete[] _array;
		
		
		// create new _array with more fields and copy it back from _tmp
		_array = new int[count+1];
		for (int i=0; i < count; i++)
		{
			_array[i] = _tmp[i];
		}
		delete[] _tmp;

		//show _array
		for (int i = 0; i < count ; i++)
		{
			if ((i != 0) && (i % 5) == 0) 
				cout << endl;
			cout << _array[i] << ' ';
		}
	}
	else cout << "\nThank you for joining us! Your soul was sold to us. Bhahaha!\n";


} while (val >= 0);

	delete[] _array;

	system("pause");
    return 0;
}

