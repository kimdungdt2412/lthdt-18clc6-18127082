#ifndef _SEMESTER_H_
#define _SEMESTER_H_

#include <iostream>
#include "School.h"
using namespace std;

class sem
{
private:
	string m_year;
	string m_termNo;
	school *m_school;
public:
	sem();
	sem(string year);
	sem(string year, string no);
	sem(string year, string no, const school* s);
	~sem();
	void output();


};
#endif // !_SEMESTER_H_
