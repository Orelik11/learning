#ifndef __CLASS_1_H__
#define __CLASS_1_H__


class CppStudio
{
private:
	static int class_counter;
public:
	CppStudio();
	~CppStudio();

	static int getClassNumber();
};


#endif