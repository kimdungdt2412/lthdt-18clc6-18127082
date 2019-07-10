#ifndef _EMPLOYEE_
#define _EMPLOYEE_

#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
	string m_name;
	string m_address;
	int m_year;
	int m_id;
	long int m_salary;
public:
	virtual void input();
	virtual long int Salary();
	virtual void output();
	int getID();
	string getName();
};
class nvsx: public Employee
{
private:
	int product;
public:
	void input();
	long int Salary();
	void output();


};
class nvvp : public Employee
{
private: 
	int days;
	long int pension;
public:
	void input();
	long int Salary();
	void output();

};
class nvql : public Employee
{
private:
	float num;
	long int bonus;
public:
	void input();
	long int Salary();
	void output();
};
#endif 
