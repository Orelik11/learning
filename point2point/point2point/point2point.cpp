// point2point.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace  std;


int main()
{
	int var = 123;
	cout << "var = " << var << endl;

	int * ptrvar = &var; // ��������� �� ���������� var
	cout << "*ptrvar = " << *ptrvar << endl;
	cout << "address of ptrvar ( ptrvar ) = " << ptrvar << endl;


	int **ptr_ptrvar = &ptrvar; //��������� �� ��������� var
	cout << "**ptr_ptrvar = " << ** ptr_ptrvar << endl;
	cout << "address of ptr_ptrvar ( ptr_ptrvar ) = " << ptr_ptrvar << endl;

	

	system("pause");
    return 0;
}

