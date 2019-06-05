#ifndef _SCHOOL_H_
#define _SCHOOL_H_

#include <iostream>
using namespace std;

class school
{
private:
	string m_name;
	string m_address;
	string m_phone;
	string m_email;
public:
	school();
	school(string name);
	school(string name, string addr);
	school(string name, string addr, string phone);
	school(string name, string addr, string phone, string email);
	~school();
	void input();
	void output();

};
#endif // !_SCHOOL_H_
