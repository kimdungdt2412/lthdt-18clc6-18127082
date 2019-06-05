#include "Bigtree.h"
#define _CRT_SECURE_NO_WARNINGS

student::student()
{
	code = 0;
	socialId = 0;
	fullname = NULL;
	address = NULL;
	gpa = 0;
}
student::student(int , int, char* name, char* m_address, double )
{
	code = 3;
	socialId = 18127082;
	fullname = name;
	address = m_address;
	gpa = 5.0;

}
student::~student()
{
	if ((fullname != NULL)&&(address!=NULL))
	{
		delete fullname;
		delete address;
	}
	else
	{
		return;
	}
	
}
istream& operator>>(istream& in, student& stu)
{
	cout << "Please input information of student: " << endl;
	cout << "Code: " << endl;
	in >> stu.code;
	cout << "Social ID: " << endl;
	in >> stu.socialId;
	cout << "Full name: " << endl;
	stu.fullname = new char;
	in.get();
	in.getline(stu.fullname, 50);
	cout << "Address: " << endl;
	stu.address = new char;
	in.get();
	in.getline(stu.address, 60);
	cout << "GPA: " << endl;
	in >> stu.gpa;
	return in;
}
ostream& operator<<(ostream& out,const student& stu)
{
	if (stu.code != NULL)
	{
		cout << "Student's Code: ";
		out << stu.code << endl;
	}
	if (stu.socialId != NULL)
	{
		cout << "Social ID: ";
		out << stu.socialId << endl;

	}
	if (stu.fullname != NULL)
	{
		cout << "Full name: ";
		out << stu.fullname << endl;
	}
	if (stu.address != NULL)
	{
		cout << "Address: ";
		out << stu.address << endl;
	}
	if (stu.gpa != NULL)
	{
		cout << "GPA: ";
		out << stu.gpa << endl;
	}

	return out;
}
student& student::operator=(student& stu)
{
	delete[]fullname;
	delete[]address;
	code = stu.code;
	socialId = stu.socialId;
	fullname = new char[strlen(stu.fullname)];
	strcpy(fullname, stu.fullname);
	address = new char[strlen(stu.address)];
	strcpy(address, stu.address);
	gpa = stu.gpa;
	return stu;
}
student::student(const student& stu1)
{
	code = stu1.code;
	socialId = stu1.socialId;
	fullname = new char;
	address = new char;
	gpa = stu1.gpa;
}