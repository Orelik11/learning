// Fibonacchi.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>	//library for formatting output

using namespace std;
unsigned long int factorial(unsigned long int);		//prototype of factorial
int i = 1;		//counter of calling recurcive function
unsigned long int result;		//result


int main()
{
	int n = 0;	//input
	cout << "Enter n!: ";
	cin >> n;
	cout << setw(2) << n << "! = " << factorial(n) << endl;

	system("pause");
    return 0;
}


unsigned long int factorial (unsigned long int f) // factorial function
{
	if ((f == 1) || (f == 0))
		return 1;			// no need to calculate factorial if n == 1 or 0

	cout << setw(20) << "Step\t" << setw(20) << i << endl;
	i++;
	cout << setw(20) << "Result = " << setw(20) << result << endl;
	result = f * factorial(f - 1); // function calls herself while f = f-1

	return result;
	
}
