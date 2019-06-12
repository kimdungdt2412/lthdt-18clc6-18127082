#ifndef _NVVP_H_
#define _NVVP_H_

#include "Nhanvien.h"

class officer: public NhanVien
{
private:
	int days;
	long int pension;
public:
	officer();
	officer(int m_days, long int m_pension);
	officer(char* m_name, int m_year, long int salary, int m_days, long int m_pension);
	officer& operator=(const officer& m_officer);
	void input();
	void output();
	long int m_Salary();



};
#endif // !_NVVP_H_
