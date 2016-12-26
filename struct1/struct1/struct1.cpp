// struct1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

struct building
{
	char *owner; //name
	char *city; //where
	int amountRoom; 
	double price;
};

int main()
{
	building apartment;	//create one
	apartment.owner = "Dennis";
	apartment.city = "New York";
	apartment.price = 150000.23;
	apartment.amountRoom = 5;

	cout << "Owner: " << apartment.owner << endl;
	cout << "In city: " << apartment.city << endl;
	cout << "Amount of rooms: " << double(apartment.amountRoom) << endl;
	cout << "Price: " << apartment.price << " $" << endl;


	system("pause");
    return 0;
}

