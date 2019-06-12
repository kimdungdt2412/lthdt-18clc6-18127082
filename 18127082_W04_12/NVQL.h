#ifndef _QUANLY_H_
#define _QUANLY_H_

#include "Nhanvien.h"

class nvql :public NhanVien
{
private:
	double no;
	long int bonus;
public:
	nvql();
	nvql(double m_no, long int m_bonus);
	nvql(char* m_name, int m_year, long int m_salary, double m_no, long int m_bonus);
	nvql& operator=(const nvql& m_nvql);
	void input();
	void output();
	long int m_Salary2();
}
#endif // !_QUANLY_H_
