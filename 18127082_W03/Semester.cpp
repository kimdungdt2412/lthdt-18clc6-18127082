#include "School.h"
#include "Semester.h"

sem::sem()
{
	m_year = "";
	m_termNo = "";
	m_school;
}
sem::sem(string year)
{
	m_year = year;

}
sem::sem(string year, string no)
{
	m_year = year;
	m_termNo = no;
}
sem::sem(string year, string no, const school* s)
{
	m_year = year;
	m_termNo = no;
	*m_school = *s;
}
sem::~sem()
{

}
void sem::output()
{
	cout << "School: " << m_school << endl;
	cout << "Year: " << m_year << endl;
	cout << "Semester: " << m_termNo << endl;
}

