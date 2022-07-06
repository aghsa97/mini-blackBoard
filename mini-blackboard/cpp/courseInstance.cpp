#include <iostream>
#include "courseInstance.h"
#include "course.h"
#include "student.h"
#include "assessment.h"
#include "teacher.h"
#include "administrator.h"

using namespace std;

courseInstance::courseInstance(int coursYear, class course *cours)
{
    courseYear = coursYear;
    course = cours;
}
void courseInstance::courseInstanceInfo()
{
    cout << "Course year: " << courseYear << endl;
    course->courseInfo();
}
void courseInstance::updateCourseYear(int year)
{
    courseYear = year;
}
void courseInstance::enrolledStudents()
{
    cout << "there are: " << students.size() << " student/students in the course." << endl;
    for (unsigned int i = 0; i < students.size(); i++)
    {
        cout << "Student[" << i << "] = " << students[i]->personName() << endl;
    }
}
void courseInstance::enrolledTeachers()
{
    cout << "there are: " << teachers.size() << " teacher/teachers in the course." << endl;
    for (unsigned int i = 0; i < teachers.size(); i++)
    {
        cout << "Teacher[" << i << "] = " << teachers[i]->personName() << endl;
    }
}
void courseInstance::addStudentToStudentsList(student *student)
{
    students.push_back(student);
}
void courseInstance::addTeacherToTeachersList(teacher *teacher)
{
    teachers.push_back(teacher);
}
void courseInstance::addAdminToAdminList(administrator *admin)
{
    administrators.push_back(admin);
}
void courseInstance::addAssessmentsToAssessmentsList(assessment *assessment)
{
    assessments.push_back(assessment);
}
vector<class student *> courseInstance::studentList()
{
    return students;
}
vector<class teacher *> courseInstance::teacherList()
{
    return teachers;
}
string courseInstance::getCourseName()
{
    return course->getCourseName();
}
