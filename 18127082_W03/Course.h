#ifndef _COURSE_H_
#define _COURSE_H_

#include "Semester.h"
#include <iostream>

class course
{
private:
	string m_id;
	string m_name;
	int numStu;
	int maxStu;
	sem *m_semester;
public:
	course();
	course(string id);
	course(string id, string name);
	course(string id, string name, int num);
	course(string id, string name, int num, int max);
	~course();
	int numStudent(int x);
	int maxStudent(int x);
	void input();
	void out(course c);
	void output(course c[]);
	
};
#endif // !_COURSE_H_
