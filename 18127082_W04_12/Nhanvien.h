#ifndef _NHANVIEN_H_
#define _NHANVIEN_H_

#include <iostream>
#include <string>
using namespace std;

class NhanVien
{
private:
	char *name;
	int year;
	long int salary;
public:
	NhanVien();
	NhanVien(char*m_name);
	NhanVien(char* m_name, long int m_salary);
	NhanVien(char* m_name, int m_year);
	NhanVien(char* m_name, int m_year, long int m_salary);
	void input();
	NhanVien(const NhanVien& nv);
	NhanVien& operator=(const NhanVien& nv);
	void output();
	long int Salary();
	void getName(char name1[31]);
};
#endif // !_NHANVIEN_H_
