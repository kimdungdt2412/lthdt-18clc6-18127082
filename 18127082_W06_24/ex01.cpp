#include "company.h"

int main()
{
	company c;
	c.input_list();
	c.show();
	cout << "Total of salary: " << c.total() << endl;
	c.num_manager();
	c.num_producer();
	system("pause");
	return 0;
}