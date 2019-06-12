#include "Nhanvien.h"
#include "NVVP.h"
#include "company.h"
#include "NVQL.h"
#include "NVSX.h"

int main()
{
	officer m_officer;
	m_officer.input();
	m_officer.output();
	cout << "Your Salary: " << m_officer.m_Salary() << endl;
	nvsx m_nvsx;
	m_nvsx.input();
	m_nvsx.output();
	nvql m_nvql;
	company m_company;
	m_company.input();
	m_company.output();
	m_company.find();


	system("pause");
	return 0;
}