#include "18127082.h"

int main()
{
	Castle c;
	Gate g;
	Prince p;
	p.inputPrince();
	c.input();
	if (c.savePrincess(p))
	{
		p.outputPrince();
	}
	else
	{
		cout << "He died!!!!";
	}
	system("pause");
	return 0;
}