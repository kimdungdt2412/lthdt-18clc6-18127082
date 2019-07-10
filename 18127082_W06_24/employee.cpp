#include "employee.h"

void Employee::input()
{
	cout << "Input your name: ";
	cin.ignore(1);
	getline(cin, m_name);
	cout << m_name;
	cout << "Input your address: ";
	getline(cin, m_address);
	cout << "Input year: ";
	cin >> m_year;
	do {
		cout << "ID: ";
		cin >> m_id;
	} while (m_id <= 0);
	cout << "Input luong co ban: ";
	cin >> m_salary;
}
int Employee::getID()
{
	return m_id;
}
string Employee::getName()
{
	return m_name;
}
long int Employee::Salary()
{
	return m_salary;
}
void Employee::output()
{
	cout << "Full name: " << m_name << endl;
	cout << "Address: " << m_address << endl;
	cout << "ID: " << m_id << endl;
	cout << "Year in: " << m_year << endl;
	cout << "Salary: " << Salary() << endl;

}
void nvvp::input()
{
	Employee::input();
	cout << "How many days you work in a month: ";
	cin >> days;
	cout << "Your pension: ";
	cin >> pension;

}
long int nvvp::Salary()
{
	return Employee::Salary() + days * 100000 + pension;
}
void nvvp::output()
{
	Employee::output();
}
void nvsx::input()
{
	Employee::input();
	cout << "Products: ";
	cin >> product;
}
long int nvsx::Salary()
{
	return Employee::Salary() + product * 2000;
}
void nvsx::output()
{
	Employee::output();
}
void nvql::input()
{
	Employee::input();
	cout << "He so: ";
	cin >> num;
	cout << "Bonus: ";
	cin >> bonus;

}
long int nvql::Salary()
{
	return Employee::Salary()* num + bonus;
}
void nvql::output()
{
	Employee::output();
}