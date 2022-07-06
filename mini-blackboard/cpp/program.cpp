#include <iostream>
#include "program.h"
#include "course.h"
#include "student.h"
#include "miniBlackboard.h"

using namespace std;

program::program(string Name, int code, class miniBlackboard *bb)
{
    name = Name;
    programCode = code;
    blackBoard = bb;
}
void program::addCourseToProgram(course *course)
{
    courses.push_back(course);
}
void program::updateProgramCode(int code)
{
    programCode = code;
}
void program::updateProgramName(string Name)
{
    name = Name;
}
vector<course *> program::whatCourses()
{
    cout << "this program has: " << courses.size() << " course/courses" << endl;
    return courses;
}
