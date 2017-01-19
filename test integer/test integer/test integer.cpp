// test integer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	double Fahr(0);
	double Cels(1);

	Fahr = Cels* 9/5;
	cout << "Fahr = " << Fahr << endl;



	system("pause");
    return 0;
}

