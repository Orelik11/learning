// ifthen.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string proc;			//intel or AMD
	int memory, Ghz;		//memory and GHz

	// enter data
	cout << "Enter memory: ";
	cin >> memory;
	cout << "Enter your proccessor speed: ";
	cin >> Ghz;
	cout << "Enter proccessor type Intel or AMD: ";
	cin >> proc;
	/*
	if (memory > 4) {
		cout << "Memory test pass!\n";
	}
	else {
		cout << "Memory test FAILED\n";
	}
	

	if (memory > 4 && Ghz > 3) {
		cout << "Memory and GHz test pass!\n";
	}*/

	transform(proc.begin(), proc.end(), proc.begin(), tolower);

	if (memory > 4 && (Ghz > 3 || proc == "intel")) {
		cout << "Your PC is perfect for games!\n";
	}
	else if (proc == "amd") {
		cout << "Perfect! Your processor is AMD!\n";
	}



	system("pause");
    return 0;
}

