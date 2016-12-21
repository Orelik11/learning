// pointpointer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string.h>

using namespace std;


char **AddPtr(char **, int, char *); //prototype of function

int main()
{
	int size = 0; // counter for number of values in array
	char **arr = 0; //pointer to array of pointers

	cout << "Start: " << endl;
	
	arr = AddPtr(arr, size, "11111111111111111");
	size++; //1
	
	arr = AddPtr(arr, size, "22222222222222222");
	size++; //2
	
	arr = AddPtr(arr, size, "33333333333333333");
	size++; //3

	arr = AddPtr(arr, size, "44444444444444444");
	size++; //4

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}

	for (int i = 0; i < size; i++)
	{
		delete[] arr[i];
	}

	delete [] arr;

	system("pause");
    return 0;
}

char **AddPtr(char **arr, int size, char *str)
{
	if (size == 0)
	{
		arr = new char *[size + 1];
	}
	else
	{
		char **copy = new char*[size + 1]; // temporary

		for (int i = 0; i < size; i++)
		{
			copy[i] = arr[i];
		}

		delete[] arr;

		arr = copy;
	}

	arr[size] = new char[strlen(str) + 1];
	//strcpy_s(arr[size], size, str);

	arr[size] = str;

	return arr;
}