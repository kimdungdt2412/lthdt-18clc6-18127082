#ifndef _SCHOOL_
#define _SCHOOL_

#include "Teacher.h"
#include <vector>

class School
{
private:
	vector <Teacher*> a;
	int num_homeroom;
public:
	void input_list();
	void show();
	long int total();
	void find();
	int NumberOfHomeroom();
	int Another();
	void UpTo10m();
	void find_byID();
	void find_byName();
	void dayoff4();

};
#endif // !1