#include "company.h"


void company::input()
{
	cout << "Nhap so Nhan vien Van phong";
	cin >> numOfficer;
	for (int i = 0; i < numOfficer; i++)
	{
		cout << "Nhap thong tin nhan vien thu: " << i + 1 << endl;
		listOfficer[i].input();
	}
	cout << "Nhap so Nhan vien San xuat";
	cin >> numNVSX;
	for (int i = 0; i < numNVSX; i++)
	{
		cout << "Nhap thong tin nhan vien thu: " << i + 1 << endl;
		dsNVSX[i].input();
	}
	cout << "Nhap so Nhan vien Quan ly: ";
	cin >> numNVQL;
	for (int i = 0; i < numNVQL; i++)
	{
		cout << "Nhap thong tin nhan vien thu: " << i + 1 << endl;
		dsNVQL[i].input();
	}

}
void company::output()
{
	cout << "Danh sach nhan vien van phong: " << endl;
	for (int i = 0; i < numOfficer; i++)
	{
		cout << "Nhap thong tin nhan vien thu: " << i + 1 << endl;
		listOfficer[i].output();
	}
	cout << "Danh sach nhan vien san xuat: " << endl;
	for (int i = 0; i < numNVSX; i++)
	{
		cout << "Nhap thong tin nhan vien thu: " << i + 1 << endl;
		dsNVSX[i].output();
	}
	cout << "Danh sach nhan vien quan ly: " << endl;
	for (int i = 0; i < numNVQL; i++)
	{
		cout << "Nhap thong tin nhan vien thu: " << i + 1 << endl;
		dsNVQL[i].output();
	}

}
long int company::totalSalary()
{
	long int total_salary;
	long int salary_officer = 0;
	for (int i = 0; i < numOfficer; i++)
	{
		salary_officer = salary_officer + listOfficer[i].m_Salary();
	}
	long int salary_sx = 0;
	for (int i = 0; i < numNVSX; i++)
	{
		salary_sx = salary_sx + dsNVSX[i].m_Salary1();
	}
	long int salary_ql = 0;
	for (int i = 0; i < numNVQL; i++)
	{
		salary_ql = salary_ql + dsNVQL[i].m_Salary2();

	}
	total_salary = salary_ql + salary_officer + salary_sx;
	return total_salary;
}
void company::find_NVQL()
{
	char* fullname;
	cout << "Nhap ten nhan vien can tim" << endl;
	cin.get();
	cin.getline(fullname, 31);
	for (int i = 0; i < numNVQL; i++)
	{
		if (fullname == dsNVQL[i].getName)
		{
			dsNVQL[i].output();
		}
		else
		{
			cout << "Khong co nhan vien can tim" << endl;
		}
	}
}
void company::find_NVSX()
{
	char* fullname;
	cout << "Nhap ten nhan vien can tim" << endl;
	cin.get();
	cin.getline(fullname, 31);
	for (int i = 0; i < numNVSX; i++)
	{
		if (fullname == dsNVSX[i].getName)
		{
			dsNVQL[i].output();
		}
		else
		{
			cout << "Khong co nhan vien can tim" << endl;
		}
	}
}
void company::find_NVVP()
{
	char* fullname;
	cout << "Nhap ten nhan vien can tim" << endl;
	cin.get();
	cin.getline(fullname, 31);
	for (int i = 0; i < numOfficer; i++)
	{
		if (fullname == listOfficer[i].getName)
		{
			listOfficer[i].output();
		}
		else
		{
			cout << "Khong co nhan vien can tim" << endl;
		}
	}
}
void company::find()
{
	int key;
	char confirm;
	do {
		cout << "Ban muon tim nhan vien nao" << endl;
		cout << "1. Nhan vien san xuat" << endl;
		cout << "2. Nhan vien van phong" << endl;
		cout << "3. Nhan vien quan ly" << endl;
		cin >> key;
		switch (key)
		{
		case 1:
			company::find_NVSX();
			break;
		case 2:
			company::find_NVVP();
			break;
		case 3:
			company::find_NVQL();
			break;

		default:
			cout << "Failed" << endl;
			break;
		}
		cout << "Ban co muon tiep tuc tim kiem" << endl;
		cin >> confirm;
	} while (confirm == 'co' || confirm == 'yes');


}