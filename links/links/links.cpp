// links.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int sum_by_value(int); 
int sum_by_reference(int &);
int sum_by_pointer(int *);

int main()
{
	int value = 15;
	int &refer = value;

	cout << "value = " << value << endl;
	cout << "reference  = " << refer << endl;

	refer += 15;

	cout << "value = " << value << endl;
	cout << "reference  = " << refer << endl;


	cout << "sum_by_value  = \t" << sum_by_value(value) << endl;
	cout << "value = \t" << value << endl;

	cout << "sum_by_reference  = \t" << sum_by_reference(value) << endl;
	cout << "value = \t" << value << endl;

	cout << "sum_by_pointer  = \t" << sum_by_pointer(&value) << endl;
	cout << "value = \t" << value << endl;

	system("pause");
    return 0;
}

int sum_by_value (int value) // функция принимающая аргумент по значению
{
	value += value;
	return value;
}

int sum_by_reference (int &reference) // функция принимающая аргумент по ссылке
{
	reference += reference;
	return reference;
}

int sum_by_pointer (int *ptrvalue) // функция принимающая аргумент через указатель
{
	*ptrvalue += *ptrvalue; // арифметика с указателем
	return *ptrvalue;
}