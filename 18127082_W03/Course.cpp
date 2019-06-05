#include "Course.h"

course::course()
{
	m_id = "";
	m_name = "";
	m_semester;
	numStu = 0;
	maxStu = 0;
}
course::course(string id)
{
	m_id = id;

}
course::course(string id, string name)
{
	m_id = id;
	m_name = name;

}
course::course(string id, string name, int num)
{
	m_id = id;
	m_name = name;
	numStu = num;
}
course::course(string id, string name, int num, int max)
{
	m_id = id;
	m_name = name;
	numStu = num;
	maxStu = max;
}
course::~course()
{

}
int course::maxStudent(int x)
{
	cout << "Max students in course: " << endl;
	cin >> x;
	if (x < 1)
	{
		return 0;
	}
	else
		maxStu = x;
}
int course::numStudent(int x)
{
	cout << "Number of student: " << endl;
	cin >> x;
	if (x < 1)
	{
		return 0;
	}
	else if (x > maxStu)
	{
		cout << "Exceeding the prescribed number" << endl;
		return 0;
	}
	else
	{
		numStu = x;
	}
}
void course::input()
{
	cout << "ID: "<< endl;
	cin >> m_id;
	cout << "Name: " << endl;
	cin >> m_name;
	cout << "Max Students in course: "<< endl;
	cin >> maxStu;
	cout << "Number of Students in course: "<< endl;
	cin >> numStu;
}

void course::out(course c)
{
	cout << "ID: " << m_id << endl;
	cout << "Name: " << m_name << endl;
	cout << "Semester: " << m_semester << endl;
	cout << "Max Students in course: " << maxStu << endl;
	cout << "Number of Students in course: " << numStu << endl;
}
void course::output(course c[])
{
	cout << "Inform of student: " << endl;
	for (int i = 0; i <= numStu; i++)
	{
		cout << "No: " << i + 1;
		out(c[i]);
	}
}


