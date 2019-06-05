#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class student
{
private:
	int code;
	int socialId;
	char* fullname;
	char* address;
	double gpa;
public:
	student();
	student(int, int, char* name, char* m_address, double);
	student(const student& stu1);
	friend istream& operator>>(istream& in, student& stu);
	friend ostream& operator<<(ostream& out,const student& stu);
	student& operator=(student& stu);
	~student();

};