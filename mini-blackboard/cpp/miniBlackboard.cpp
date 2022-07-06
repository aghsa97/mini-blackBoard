#include <iostream>
#include "miniBlackboard.h"
#include "person.h"
#include "course.h"
#include "program.h"
#include "courseInstance.h"
#include "student.h"
#include "teacher.h"

using namespace std;

void miniBlackboard::addCourseToCoursesList(course *course) { courses.push_back(course); }
void miniBlackboard::addPersonToPeopleList(person *person) { people.push_back(person); }
void miniBlackboard::addProgramToProgramsList(program *program) { programs.push_back(program); }
void miniBlackboard::personInformations(infoInterface &obj) { cout << obj.personInformation() << endl; }
void miniBlackboard::courseStudentsAndTeachers(courseInstance *course)
{
    cout << "there are: " << course->studentList().size() << " student/students in the course." << endl;
    for (unsigned int i = 0; i < course->studentList().size(); i++)
    {
        cout << "Student[" << i << "] = " << course->studentList()[i]->personInformation() << endl;
    }
    cout << "there are: " << course->teacherList().size() << " teacher/teachers in the course." << endl;
    for (unsigned int i = 0; i < course->teacherList().size(); i++)
    {
        cout << "Teacher[" << i << "] = " << course->teacherList()[i]->personInformation() << endl;
    }
}
vector<class person *> miniBlackboard::peopleList()
{
    return people;
}
