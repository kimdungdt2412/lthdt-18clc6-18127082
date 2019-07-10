#ifndef _TEACHER_
#define _TEACHER_

#include <iostream>
#include <string>
using namespace std;

class Teacher
{
protected:
	string m_name;
	string m_address;
	int m_id;
	float m_factor;
	int day_off;
	long int m_salary;
public:
	Teacher();
	Teacher(string name);
	Teacher(string name, string address);
	Teacher(string name, string address, int id);
	Teacher(string name, string address, int id, float factor);
	virtual void input();
	virtual long int Salary();
	virtual void output();
	int getID();
	string getName();
	int getDayoff();

};
class Homeroom : public Teacher
{
private:
	long int allowance;
public:
	void input();
	long int Salary();
	void output();
	Homeroom();
	Homeroom(long int m);
	Homeroom(string name, string address);
	Homeroom(string name, string address, int id);
	Homeroom(string name, string address, int id, float factor);

};
#endif