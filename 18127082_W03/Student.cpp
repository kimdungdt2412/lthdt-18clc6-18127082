#include "Course.h"
#include "Student.h"


stu::stu()
{
	
}
stu::stu(string name)
{
	m_name = name;

}
stu::stu(string name, string id)
{
	m_id = id;
	m_name = name;
}
stu::stu(string name, string id, string stu_class)
{
	m_id = id;
	m_name = name;
	m_class = stu_class;
}
stu::stu(string name, string id, string stu_class, const school* sc)
{
	m_id = id;
	m_name = name;
	m_class = stu_class;
	*m_school = *sc;
}
stu::~stu()
{

}
void stu::input(stu& s)
{
	cout << "Name: " << endl;
	cin >> m_name;
	cout << "ID: " << endl;
	cin >> m_id;
	cout << "Class: " << endl;
	cin >> m_class;
	cout << "Current Course: " << endl;
	cin >> curCourse;


}
void stu::output(stu& s)
{
	cout << "Name: " <<m_name<< endl;
	cout << "ID: " << m_id << endl;
	cout << "Class: " << m_class << endl;

}

bool stu::canRegisterMore()
{
	if (curCourse >= 6)
		return false;
	else
		return true;
}
void stu::enroll(course* cs)
{
	
		if (canRegisterMore() == true)
		{
			
				enroll.push_back(cs);
				curCourse++;
			
		}
		else
		{
			cout << "Failed" << endl;
		}
	
}