#include "NVQL.h"

nvql::nvql()
{
	no = 3.3;
	bonus = 30;
	return;

}
nvql::nvql(double m_no, long int m_bonus)
{
	no = m_no;
	bonus = m_bonus;
}
nvql::nvql(char* m_name, int m_year, long int m_salary, double m_no, long int m_bonus) :NhanVien(m_name, m_year, m_salary)
{
	this->no = m_no;
	this->bonus = m_bonus;
}
nvql& nvql::operator=(const nvql& m_nvql)
{
	if (this == &m_nvql)
	{
		return *this;
	}
	NhanVien::operator=(m_nvql);
	this->no = m_nvql.no;
	this->bonus = m_nvql.bonus;
	return *this;

}
void nvql::input()
{
	NhanVien::input();
	cout << "He so chuc vu: ";
	cin >> no;
	cout << "bonus: ";
	cin >> bonus ;

}
void nvql::output()
{
	NhanVien::output();
	cout << "He so: " << no << endl;
	cout << "Your bonus: " << bonus<< endl;
}
long int nvql::m_Salary2()
{
	return NhanVien::Salary()* no + bonus;
}