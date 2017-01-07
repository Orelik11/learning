// class_set.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class CppStudio {
private:
	int day, //day
		month,		//month
		year;		//year
public:
	void message()
	{
		cout << "Hi!\n";
	}
	void getDate()
	{
		//show the date
		cout << "Date: " << day << "." << month << "." << year << endl;
	}
	void setDate(int date_day, int date_month, int date_year)
	{
		day = date_day;
		month = date_month;
		year = date_year;
	}
};


int main()
{
	CppStudio objCpp; //
	int day, month, year;
	cout << "Enter day,month,year";
	cin >> day;
	cin >> month;
	cin >> year;

	objCpp.setDate(day, month, year);
	objCpp.getDate();
	objCpp.message();



	system("pause");
	return 0;
}