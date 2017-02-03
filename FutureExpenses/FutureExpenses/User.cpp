#include "stdafx.h"
#include <string>
#include "User.h"
#include <vector>

using namespace std;

User::User()
{

}

void User::add_expense(tm day_spend, int sum, string description, string category)
{
	vector<expenses> expense;
	expense.reserve(10);
}

void User::add_income(tm day_spend, int sum, string description, string category)
{
	vector<incomes> income;
}
