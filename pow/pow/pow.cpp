// pow.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace  std;

double fsquare(double *); // square of the circle

int main()
{
	double *r = new double(0);

	cout << "Enter radius: ";
	cin >> *r;

	cout << "Square is " << fsquare(r) << endl;

	system("pause");
	return 0;
}


double fsquare (double *radius)
{
	return (pow(3.14, 2)* (*radius));
}
