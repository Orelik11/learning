// task1balance.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace  std;


int main()
{
	char ch; //put here symbol by symbol from file;
	int count = 0; // counter for brackets
	fstream file("task1balance2.cpp", ios_base::in);

	if (file.is_open())
	{
		while (file >> noskipws >> ch) 
		{
			switch (ch)
			{
			case ('{'): 
				count++;
				break;
			case ('}'):
				count--;
				break;
			default:;
			}
		}
		if (count == 0) {
			cout << "consistant!\n";
		}
		else if (count > 0)
		{
			cout << "no \'}\' symbol\n";
		}
		else
		{
			cout << "no \'{\' symbol\n";
		}

	}
	else
		cout << "no file opened!\n";


	file.close();


	system("pause");
    return 0;
}

