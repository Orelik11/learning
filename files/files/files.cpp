// files.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace  std;


int main()
{
	ofstream file1("test.txt");

	if (file1.is_open())
	{
		file1 << "HAHAHA!" << endl;
		file1 << "Ja nesu s soboi kota";
		file1.close();
	}

	ifstream file2;
	char *tmp = new char;
	file2.open("test.txt");
	if (file2.is_open())
	{
		file2.getline(tmp,50); //read file for 50 symbols or until EOL
		cout << tmp << endl;

		file2 >> tmp; // read next word to buffer
		cout << tmp << endl;

		file2 >> tmp; // read next word to buffer
		cout << tmp << endl;

		file2 >> tmp; // read next word to buffer
		cout << tmp << endl;

		file2 >> tmp; // read next word to buffer
		cout << tmp << endl;

		file2 >> tmp; // read next word to buffer
		cout << tmp << endl;

		file2 >> tmp; // read next word to buffer
		cout << tmp << endl;

		file2 >> tmp; // read next word to buffer
		cout << tmp << endl;

		file2 >> tmp; // read next word to buffer
		cout << tmp << endl;
	}

	file1.open("test.txt",ios_base::app);// open file to append
	if (file1.is_open())
	{
		file1 << tmp << endl;
		
	}

	cout << endl;
	system("pause");
    return 0;
}

