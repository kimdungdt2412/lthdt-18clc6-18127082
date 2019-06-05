#include "Course.h"
#include "School.h"
#include "Semester.h"
#include "Student.h"

int main()
{
	school school;
	sem sem;
	stu st;
	int numCourse;
	cout << "Create Student" << endl;
	st.input(st);
	cout << "Create Course" << endl;
	cout << "Number course: " << endl;
	cin >> numCourse;
	for (int i = 0; i < numCourse; i++)
	{
		course* Course = new course;
		Course->input();
		st.enroll(Course);
	}
	system("pause");
	return 0;
	
}