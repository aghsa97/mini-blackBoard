#include <iostream>
#include "programInstance.h"
#include "program.h"
#include "student.h"

using namespace std;

programInstance::programInstance(int year, class program *prog)
{
    startYear = year;
    program = prog;
}
void programInstance::updateStartYear(int year)
{
    startYear = year;
}
void programInstance::enrolledStudents()
{
    cout << "there are: " << students.size() << " student/students in the program." << endl;
    for (unsigned int i = 0; i < students.size(); i++)
    {
        cout << "Student[" << i << "] = " << students[i]->personName() << endl;
    }
}
void programInstance::addStudentToProgramInstance(class student *stud)
{
    students.push_back(stud);
}
