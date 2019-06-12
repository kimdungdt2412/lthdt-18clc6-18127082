#include "NVVP.h"

officer::officer()
{
	days = 0;
	pension = 0;

}
officer::officer(int m_days, long int m_pension)
{
	days = m_days;
	pension = m_pension;
}
officer::officer(char* m_name, int m_year, long int m_salary, int m_days, long int m_pension) :NhanVien(m_name, m_year, m_salary)
{
	this->days = m_days;
	this->pension = m_pension;
}
officer& officer::operator=(const officer& m_officer)
{
	if (this == &m_officer)
	{
		return *this;
	}
	NhanVien::operator=(m_officer);
	this->days = m_officer.days;
	this->pension = m_officer.pension;
	return *this;

}
void officer::input()
{
	NhanVien::input();
	cout << "Workdays: " ;
	cin >> days;
	cout << "Pension: ";
	cin >> pension;

}
void officer::output()
{
	NhanVien::output();
	cout << "Workdays: " << days << endl;
	cout << "Pension: " << pension << endl;
}
long int officer::m_Salary()
{
	return NhanVien::Salary() + days * 100000 + pension;
}