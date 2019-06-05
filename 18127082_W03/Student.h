#ifndef _STUDENT_H_
#define _STUDENT_H_

#include "Course.h"
#include "School.h"
#include <iostream>

class stu
{
private:
	string m_name;
	string m_id;
	string m_class;
	int curCourse;
	school* m_school;
	vector<Course*>enroll;
public:
	stu();
	stu(string name);
	stu(string name, string id);
	stu(string name, string id, string stu_class);
	stu(string name, string id, string stu_class, const school* sc);
	~stu();
	void input(stu& s);
	void output(stu& s);
	bool canRegisterMore();
	void enroll(course* cs);



};

#endif // !_STUDENT_H_
