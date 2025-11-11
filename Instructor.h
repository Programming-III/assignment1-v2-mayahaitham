#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
class course{
private:
string courseCode;
string courseName;
int maxStudents;
Student* students;
int currentStudents;
public:
addStudent(const Student& s);
displayCourseInfo();
}
#endif











#endif
