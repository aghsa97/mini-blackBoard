#include <iostream>
#include "administrator.h"
#include "courseInstance.h"
#include "programInstance.h"
#include "teacher.h"
#include "program.h"
#include "miniBlackboard.h"
#include "course.h"
#include "student.h"
#include "person.h"

using namespace std;

void administrator::addStudentToCourse(student *student, courseInstance *course)
{
    course->addStudentToStudentsList(student);
    student->addCourseToCoursesList(course);
    cout << "student added" << endl;
}
void administrator::addTeacherToCourse(teacher *teacher, courseInstance *course)
{
    course->addTeacherToTeachersList(teacher);
    teacher->addCourseToCoursesList(course);
    cout << "teacher added" << endl;
}
void administrator::addProgram(string name, int code, miniBlackboard *bb)
{
    program newProgram(name, code, bb);
    bb->addProgramToProgramsList(&newProgram);
}
void administrator::addCourse(string name, int code, int period, double points, miniBlackboard *bb)
{
    course newCourse(name, code, period, points, bb);
    bb->addCourseToCoursesList(&newCourse);
}
void administrator::addStudent(int Id, int ClassYear, string email, string password, string loginstatus, string Name, string phoneNum, string Role, int Age, class miniBlackboard *bb)
{
    student newStudent(Id, ClassYear, email, password, loginstatus, Name, phoneNum, Role, Age, bb);
    bb->addPersonToPeopleList(&newStudent);
}
void administrator::addTeacher(int officeNum, string email, string password, string loginstatus, string Name, string phoneNum, string Role, int Age, class miniBlackboard *bb)
{
    teacher newTeacher(officeNum, email, password, loginstatus, Name, phoneNum, Role, Age, bb);
    bb->addPersonToPeopleList(&newTeacher);
}
