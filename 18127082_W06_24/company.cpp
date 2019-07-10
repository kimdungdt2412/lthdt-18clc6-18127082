#include "company.h"

void company::input_list()
{
	int n;
	int type;
	Employee* b;
	cout << "How many employees you want to add: ";
	cin >> n;
	for (int i = 0; i <= n; i++)
	{
		cout << "Information of Employee: " << i << endl;
		cout << "Type of Employees: " << endl;
		cout << "1. Officer" << endl;
		cout << "2. Producer" << endl;
		cout << "3. Manager" << endl;
		cin >> type;
		b = NULL;
		if (type == 1)
		{
			b = new nvvp;
			num_nvvp++;

		}
		else {
			if (type == 2)
			{
				b = new nvsx;
				num_nvsx++;

			}
			else {
				if (type == 3)
				{
					b = new nvql;
					num_nvql++;
				}
				else
				{
					cout << "Error" << endl;
				}
			}
		}
		b->input();
		a.push_back(b);

	}

}
void company::show()
{
	for (int i = 0; i < a.size(); i++)
	{
		cout << "Information of the Employee[ " <<i<<"]"<< endl;
		a[i]->output();
	}
}
long int company::total()
{
	long int total = 0;
	for (int i = 0; i < a.size(); i++)
	{
		total = total + a[i]->Salary();
	}
	return total;
}
void company::find()
{
	
	long int max;
	max = a[0]->Salary();
	cout << "Information of Employees has the highest salary: " << endl;
	for (int i = 0; i < a.size(); i++)
	{
		if (max < a[i]->Salary())
		{
			max = a[i]->Salary();
			a[i]->output();
		}
	}

}
void company::num_manager()
{
	cout << "Number of Manager: " << num_nvql << endl;
}
void company::num_producer()
{
	cout << "Number of Producer: " << num_nvsx << endl;
}
void company::average()
{
	long int m_average;
	m_average = total() / (num_nvql + num_nvsx + num_nvvp);
	cout << "Average wage is: " << m_average;

}
void company::under3()
{
	long int x = 3000000;
	cout << "List of employees have salary under 3 milion" << endl;
	for (int i = 0; i <= a.size(); i++)
	{
		if (a[i]->Salary() < x)
		{
			a[i]->output();
		}

	}
}
void company::find_byID()
{
	int id;
	cout << "Enter ID which you want to find: ";
	cin >> id;
	for (int i = 0; i <= a.size(); i++)
	{
		if (id == a[i]->getID())
		{
			a[i]->output();
		}
		else
		{
			cout << "Not found" << endl;
		}
	}
}
void company::find_byName()
{
	string name;
	cout << "Enter Name which you want to find: ";
	cin.ignore(1);
	getline(cin, name);
	for (int i = 0; i <= a.size(); i++)
	{
		if (name.compare(a[i]->getName())==1)
		{
			a[i]->output();
		}
		else if(name.compare(a[i]->getName()) == 0)
		{
			;
		}
		else
		{
			cout << "Not found" << endl;
		}
	}
}

