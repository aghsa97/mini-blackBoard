#include <iostream>
#include "teacher.h"

using namespace std;

void teacher::coursesAssignedTo()
{
    cout << "this teacher is teaching: " << courses.size() << " course/courses." << endl;
    for (unsigned int i = 0; i <= courses.size(); i++)
    {
        cout << "course[" << i << "] = " << courses[i]->getCourseName() << endl;
    }
}
void teacher::addCourseToCoursesList(courseInstance *course)
{
    courses.push_back(course);
}
vector<course *> teacher::whatCourses()
{
    vector<course *> teacherCourses;
    cout << "this teacher is teaching: " << courses.size() << " course/courses." << endl;
    for (unsigned int i = 0; i < courses.size(); i++)
    {
        teacherCourses.push_back(courses[i]->course);
    }
    return teacherCourses;
}
