#include "School.h"

school::school()
{
	m_name = "";
	m_address = "";
	m_phone = "";
	m_email = "";

}
school::school(string name)
{
	m_name = name;
}
school::school(string name, string addr)
{
	m_name = name;
	m_address = addr;

}
school::school(string name, string addr, string noPhone)
{
	m_name = name;
	m_address = addr;
	m_phone = noPhone;
}
school::school(string name, string addr, string noPhone, string email)
{
	m_name = name;
	m_address = addr;
	m_phone = noPhone;
	m_email = email;

}
school::~school()
{

}
void school::input()
{
	cout << "School's name: " << endl;
	cin >> m_name;
	cout << "Address: " << endl;
	cin >> m_address;
	cout << "Phone number: " << endl;
	cin >> m_phone;
	cout << "Email: " << endl;
	cin >> m_email;
}
void school::output()
{
	cout << "School's name: " << m_name << endl;
	cout << "Address: " << m_address << endl;
	cout << "Phone number: " << m_phone << endl;
	cout << "Email: " << m_email << endl;

}