// enum.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

//���������� ������������
enum level { parking, supermarket, hardwareStores, boutiques, sportSpa, clubRestaurantBar };

int main()
{
	setlocale(LC_ALL, "rus");

	level floor = parking;//���������� ���� ������������ level
						  //level floor = 0; �� ��������������
	int fl = floor;//����� ����� �������������
	int exit = 1;//����� ������������ - ����� � ����������

	cout << "\n\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n";
	cout << "\t����� ���������� � ��� �������-��������������� ����� MALL!!!\n";
	cout << "\t���������� ��� ���������� � ����� � �������� ��� �����!\n\n";
	cout << "\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n";

	while (exit)//���� exit ����� true
	{
		cout << "\n������� ������ � ������� ����� (�� 0 �� 5): ";
		cin >> fl;

		switch (fl)
		{
		case(parking):
			cout << "\a�� ���������� � �������!!!" << endl;
			break;

		case(supermarket):
			cout << "\a�� �� ������ �����!";
			cout << "\n����� �� ������ �������� ��� ����������� � ������ �������� � ������ ��� ����.\n\n";
			break;

		case(hardwareStores):
			cout << "\a�� �� ������ �����!";
			cout << "\n����� ������������� �������� ������� �������, IT� � ��������� ���������.\n\n";
			break;

		case(boutiques):
			cout << "\a�� �� ������� �����!";
			cout << "\n����� ��� ���� ������������ ������! ������, �����, �������� ���������.\n\n";
			break;

		case(sportSpa):
			cout << "\a�� �� ��������� �����!";
			cout << "\n����� �� ������ �������� �������, �����, ���������, spa-�����!\n\n";
			break;

		case(clubRestaurantBar):
			cout << "\a�� �� ����� �����!";
			cout << "\n��� �� ������ �������� ������ ����, ��� � ��������!\n\n";
			break;

		default: cout << "\a\a\a������! � ��� ������ 5 ������!\n\n";
		}

		do
		{
			cout << "���� ������ ����� �� ���� �����, ������� 0.\n";
			cout << "���������� ������������� ������� - ������� 1: ";
			cin >> exit;
		} while ((exit < 0) || (exit > 1));

		
	}


	system("pause");
	return 0;
}