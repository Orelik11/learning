// Pointer2function.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int nod(int, int);

int main()
{
	int(*ptrnod) (int, int);
	ptrnod = nod; // ����������� ����� ������� ��������� ptrnod
	int a, b;

	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	cout << "NOD = " << ptrnod(a, b) << endl; //  ���������� � ������� ����� ���������
	system("pause");
    return 0;
}

int nod (int number1, int number2)
{
	if (number2 == 0) // ������� �������
		return number1;

	return nod(number2, number1 % number2);
}