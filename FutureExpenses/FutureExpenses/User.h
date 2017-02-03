#ifndef __USER_H__
#define __USER_H__

#include <ctime>
#include <string>

class User
{
private:
	struct expenses {
		tm _day_of_spend;		//time when you spent the money
		unsigned int _sum;		// amount of money
		string _desc;			// why you spend them
		string _category;		// for reporting
	};
	struct incomes {
		tm _day_of_spend;
		unsigned int _sum;
		string _desc;
		string _category;
	};
public:
	User();
	void add_expense(tm, int, string, string);
	void add_income(tm, int, string, string);
	~User();
};

#endif // !__USER_H__
