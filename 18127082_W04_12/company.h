#include "NVSX.h"
#include "NVVP.h"
#include "NVQL.h"

class company
{
private:
	officer listOfficer[100];
	int numOfficer;
	nvsx dsNVSX[100];
	int numNVSX;
	nvql dsNVQL[100];
	int numNVQL;
public:
	company();
	void input();
	void output();
	~company();
	long int totalSalary();
	void find();
	void find_NVVP();
	void find_NVSX();
	void find_NVQL();

};