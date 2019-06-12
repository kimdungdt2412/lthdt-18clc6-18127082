#include "NVSX.h"

nvsx::nvsx()
{
	products = 0;

}
nvsx::nvsx(int m_product)
{
	products = m_product;
	
}
nvsx::nvsx(char* m_name, int m_year,  int m_product) :NhanVien(m_name, m_year, m_product)
{
	this->products = m_product;

}
nvsx& nvsx::operator=(const nvsx& m_nvsx)
{
	if (this == &m_nvsx)
	{
		return *this;
	}
	NhanVien::operator=(m_nvsx);
	this->products = m_nvsx.products;
	return *this;

}
void nvsx::input()
{
	NhanVien::input();
	cout << "Products: ";
	cin >> products;
	

}
void nvsx::output()
{
	NhanVien::output();
	cout << "Products: " << products << endl;
}
long int nvsx::m_Salary1()
{
	return NhanVien::Salary() + products * 2000;
}