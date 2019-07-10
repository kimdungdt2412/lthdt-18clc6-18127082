#include "School.h"

void School::input_list()
{
	int n;
	int type;
	Teacher* b;
	cout << "How many Teachers you want to add: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "Information of Teachers: " << i << endl;
		cout << "Type of Teachers: " << endl;
		cout << "1. Normal Teacher" << endl;
		cout << "2. Homeroom Teacher" << endl;
		cin >> type;
		b = NULL;
		if (type == 1)
		{
			b = new Teacher;

		}
		else if (type == 2)
			{
				b = new Homeroom;
				num_homeroom++;

			}
		else
		{
			cout << "Failed" << endl;
		}
		b->input();
		a.push_back(b);

	}

}
void School::show()
{
	for (int i = 0; i < a.size(); i++)
	{
		cout << "Information of the Teacher: " << endl;
		a[i]->output();
	}
}
long int School::total()
{
	long int total = 0;
	for (int i = 0; i < a.size(); i++)
	{
		total = total + a[i]->Salary();
	}
	return total;
}
void School::find()
{
	long int max;
	max = a[0]->Salary();
	cout << "Information of Teacher has the highest salary: " << endl;
	for (int i = 0; i < a.size(); i++)
	{
		if (max < a[i]->Salary())
		{
			max = a[i]->Salary();
			a[i]->output();
		}
	}
	
	

}
int School::NumberOfHomeroom()
{
	return num_homeroom;
}
int School::Another()
{
	return a.size() - num_homeroom;
}
void School::UpTo10m()
{
	long int x = 10000000;
	cout << "List of teachers have salary up to 10 milion" << endl;
	for (int i = 0; i <= a.size(); i++)
	{
		if (a[i]->Salary() > x)
		{
			a[i]->output();
		}

	}
}
void School::find_byID()
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
	}
}
void School::find_byName()
{
	string name;
	cout << "Enter Name which you want to find: ";
	cin.ignore(1);
	getline(cin, name);
	for (int i = 0; i <= a.size(); i++)
	{
		if (name.compare(a[i]->getName()) == 1)
		{
			a[i]->output();
		}
		
	}
}
void School::dayoff4()
{
	for (int i = 0; i < a.size(); i++)
	{
		cout << "List of Teachers have 4 day-off : " << endl;
		if (a[i]->getDayoff() >= 4)
		{
			a[i]->output();
		}
	}
}