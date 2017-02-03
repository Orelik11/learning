#ifndef __USER_H__
#define __USER_H__

#include <ctime>
#include <string>

class User
{
private:
	struct expense {
		tm _day_of_spend;		//time when you spent the money
		unsigned int _sum;		// amount of money
		string _desc;			// why you spend them
		string _category;		// for reporting
	};
	struct income {
		tm _day_of_spend;
		unsigned int _sum;
		string _desc;
		string _category;
	};
public:
	User();
	~User();
};

#endif // !__USER_H__
