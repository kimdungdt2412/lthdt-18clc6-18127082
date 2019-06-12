#ifndef _SANXUAT_H_
#define _SANXUAT_H_

#include "Nhanvien.h"

class nvsx:public NhanVien
{
private:
	int products;
public:
	nvsx();
	nvsx(int m_product);
	nvsx(char* m_name, int m_year, int m_product);
	nvsx& operator=(const nvsx& m_nvsx);
	void input();
	void output();
	long int m_Salary1();
};

#endif // !_SANXUAT_H_


