#include <iostream>
#include "student.h"
#include "program.h"
#include "courseInstance.h"

using namespace std;

void student::personInfo()
{
    cout << "id: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Email: " << emailAddress << endl;
    cout << "class year: " << classYear << endl;
    cout << "Status: " << loginStatus << endl;
    cout << "Role: " << role << endl;
    cout << "Phone Number: " << phoneNumber << endl;
    cout << "Age: " << age << endl;
}
void student::coursesEnrolled()
{
    cout << "this student is studying: " << courses.size() << " course/courses." << endl;
    for (unsigned int i = 0; i < courses.size(); i++)
    {
        cout << "course[" << i << "] = " << courses[i]->getCourseName() << endl;
    }
}
void student::updateStudentId(int Id)
{
    id = Id;
}
void student::updateClassYear(int year)
{
    classYear = year;
}
void student::addCourseToCoursesList(courseInstance *course)
{
    courses.push_back(course);
}
vector<course *> student::whatCourses()
{
    vector<course *> studentCourses;
    cout << "this student is studying: " << courses.size() << " course/courses." << endl;
    for (unsigned int i = 0; i < courses.size(); i++)
    {
        studentCourses.push_back(courses[i]->course);
    }
    return studentCourses;
}
string student::personName()
{
    return name;
}
