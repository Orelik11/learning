// point2function.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

char **AddPtr(char **pp, int size, char *str); //prototype of function

int main()
{
	int size = 0; // count of pointer to string
	char **pp = 0; // pointer to array holding strings

	cout << "Adding pointers for 5 pointers holding strings" << endl;

	//calling function and assign value
	pp = AddPtr(pp, size, "111111111111111111111");
	size++;
	pp = AddPtr(pp, size, "22222222222222222222");
	size++;
	pp = AddPtr(pp, size, "333333333333333333333");
	size++;
	pp = AddPtr(pp, size, "444444444444444444444");
	size++;
	pp = AddPtr(pp, size, "5555555555555555555555");
	size++;

	for (int i=0; i < size; i++) //freeing memory for array
	{
		delete[] pp[i];
	}
	delete[] pp;

	system("pause");
    return 0;
}

char **AddPtr(char **pp, int size, char *str)
{
	if (size == 0)
	{
		pp = new char*[size + 1]; // assign memory for pointer
	}
	else // in case of array isn't blank, copying data to temporary array
	{
		char **copy = new char*[size + 1]; // create temporary array
		for (int i = 0;i < size; i++)
		{
			copy[i] = pp[i];
		}
		//now all strings are in "copy" array
		delete[] pp;

		pp = copy; // showing where our data now
	}

	pp[size] = new char[strlen(str) + 1]; //assign memory for new string
	strcpy_s(pp[size], strlen(str), str);

	return pp;
}