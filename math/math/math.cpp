// math.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <fstream>
#include <string>

using namespace std;


int main()
{
	double *a = new double(0); // variable a
	double *b = new double(0); // variable b
	string* _fname = new string("");		// name of the file for results writing
	string *_cycle = new string("");		//exit or try math functions again

	cout << "Enter name of file: ";
	cin >> *_fname;
	if ((*_fname).find(".txt") == string::npos)	// add extension "txt" if there is no extension
	{
		*_fname += ".txt";
	}
	fstream file(*_fname, ios_base::app); // open file and write there all output
	if (file.is_open())
	{
		do
		{
			cout << "Please enter \"a\": ";
			cin >> *a;
			cout << "Please enter \"b\": ";
			cin >> *b;


			file << "a = " << *a << "; b = " << *b << endl;
			cout << "abs(a) = " << abs(*a) << endl;		// module of 'a'
			file << "abs(a) = " << abs(*a) << endl;

			cout << "b*b, sqrt(b) = " << sqrt(*b) << endl;	// sqrt of 'b' = b*b
			file << "b*b, sqrt(b) = " << sqrt(*b) << endl;

			cout << "a^b, pow(a,b) = " << pow(*a, *b) << endl;	//a^b
			file << "a^b, pow(a,b) = " << pow(*a, *b) << endl;

			cout << "\nceil(2.3) = 3.0, ceil(-2.3) = -2.0\n";
			cout << "5.4 ==> 5, ceil (a) = " << ceil(*a) << endl;
			file << "5.4 ==> 5, ceil (a) = " << ceil(*a) << endl;


			cout << "\nfloor(12.4)=12, floor(-2.9) = -3\n";
			cout << "floor (a) = " << floor(*a) << endl;
			file << "floor (a) = " << floor(*a) << endl;

			cout << "\nfmod(4.4, 7.5) = 4.4, fmod(7.5, 4.4) = 3.1\n";
			cout << "fmod (a,b) = " << fmod(*a, *b) << endl;
			file << "fmod (a,b) = " << fmod(*a, *b) << endl << endl;


			cout << "Please enter 1 to exit or anything to try again.\n"; // try again?
			cin >> *_cycle;
		} while ((*_cycle) != "1");
	}
	else
	{
		cout << "Couldn't create file " << *_fname << endl;
	}



	file.close();
	cout << "Thank you for joining us!\n";


	system("pause");
    return 0;
}

