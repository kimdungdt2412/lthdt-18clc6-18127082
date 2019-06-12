#include "Nhanvien.h"

NhanVien::NhanVien()
{
	name = new char[31];
	strcpy(name, "Khong biet");
	year = 2011;
	salary = 800000;
}
NhanVien::NhanVien(char* m_name)
{
	name = new char[31];
	strcpy(name, m_name);
	year = 2011;
	salary = 800000;

}
NhanVien::NhanVien(char* m_name, long int m_salary)
{
	name = new char[31];
	strcpy(name, m_name);
	year = 2011;
	salary = m_salary;

}
NhanVien::NhanVien(char* m_name, int m_year, long int m_salary)
{
	name = new char[31];
	strcpy(name, m_name);
	year = m_year;
	salary = m_salary;
}
NhanVien::NhanVien(char* m_name, int m_year)
{
	name = new char[31];
	strcpy(name, m_name);
	year = m_year;
	salary = 800000;
}
void NhanVien::input()
{
	cout << "Input your fullname: ";
	cin.get();
	cin.getline(name, 31);
	cout << "Input year: ";
	cin >> year;
	cout << "Input salary: ";
	cin >> salary;
	
	
}
void NhanVien::output()
{
	cout << "Information of employee" << endl;
	cout << "Full name: " << name << endl;
	cout << "Year in: " << year << endl;
	cout << "Your salary: " << salary << endl;
}
NhanVien::NhanVien(const NhanVien& nv)
{
	this->name = new char[31];
	strcpy(name, nv.name);
	this->year = nv.year;
	this->salary = nv.salary;

}
NhanVien& NhanVien::operator=(const NhanVien& nv)
{
	this->name = new char[31];
	strcpy(name, nv.name);
	this->year = nv.year;
	this->salary = nv.salary;
	return *this;


}
void NhanVien::getName(char name1[31])
{
	strcpy(name, name1);
}
long int NhanVien::Salary()
{
	return salary;
}