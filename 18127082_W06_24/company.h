#ifndef _COMPANY_
#define _COMPANY_

#include "employee.h"
#include <vector>

class company
{
private:
	char* name;
	vector <Employee*> a;
	int num_nvsx;
	int num_nvql;
	int num_nvvp;
public:
	void input_list();
	void show();
	long int total();
	void find();
	void num_manager();
	void num_producer();
	void average();
	void under3();
	void find_byID();
	void find_byName();


};
#endif // !_COMPANY_
