#include "Teacher.h"

Teacher::Teacher()
{
	m_name = "";
	m_address = "";
	m_id = 0;
	m_factor = 0;
	day_off = 0;
	m_salary = 0;
}
Teacher::Teacher(string name)
{
	m_name = name;
}
Teacher::Teacher(string name, string address)
{
	m_name = name;
	m_address = address;

}
Teacher::Teacher(string name, string address, int id)
{
	m_name = name;
	m_address = address;
	m_id = id;
}
Teacher::Teacher(string name, string address, int id, float factor)
{
	m_name = name;
	m_address = address;
	m_id = id;
	m_factor = factor;
}
void Teacher::input()
{
	cout << "Enter name:";
	cin.ignore(1);
	getline(cin, m_name);
	cout << "Address: ";
	getline(cin, m_address);
	do {
		cout << "ID: ";
		cin >> m_id;
	} while (m_id <= 0);
	cout << "Coefficients salary: ";
	cin >> m_factor;
	cout << "Day off: ";
	cin >> day_off;
	cout << "Luong co ban: ";
	cin >> m_salary;

}
long int Teacher::Salary()
{
	return m_factor * m_salary - day_off * 100000;
}
void Teacher::output()
{
	cout << "Teacher's name: " << m_name << endl;
	cout << "Teacher's address: " << m_address << endl;
	cout << "Teacher's ID: " << m_id << endl;
	cout << "Coefficients salary is: " << m_factor << endl;
	cout << "Day off in month: " << day_off << endl;
	cout << "Salary: " << Salary() << endl;
}

int Teacher::getID()
{
	return m_id;
}
string Teacher::getName()
{
	return m_name;
}
int Teacher::getDayoff()
{
	return day_off;
}
Homeroom::Homeroom()
{
	allowance = 500000;

}
Homeroom::Homeroom(long int m)
{
	allowance = m;
}
Homeroom::Homeroom(string name, string address)
{
	this->m_name = name;
	this->m_address = address;
}
Homeroom::Homeroom(string name, string address, int id)
{
	this->m_name = name;
	this->m_address = address;
	this->m_id = id;
}
Homeroom::Homeroom(string name, string address, int id, float factor)
{
	this->m_name = name;
	this->m_address = address;
	this->m_id = id;
	this->m_factor = factor;
}
void Homeroom::input()
{
	Teacher::input();
	cout << "Allowance: ";
	cin >> allowance;
}
void Homeroom::output()
{
	Teacher::output();
	cout << "Allowance is: " << allowance << endl;
}
long int Homeroom::Salary()
{
	return Teacher::Salary() + allowance;
}
