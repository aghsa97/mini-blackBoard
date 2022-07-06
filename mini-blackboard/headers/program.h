#pragma once
#include <string>
#include "coursesInterface.h"

using namespace std;

class program : public coursesInterface
{
private:
    string name;
    int programCode;
    class miniBlackboard *blackBoard;
    vector<class course *> courses;

public:
    program(string name, int code, class miniBlackboard *bb);
    ~program() {}

    // Virtual functions --->
    vector<class course *> whatCourses();

    // Class functions --->
    void addCourseToProgram(class course *course);
    void updateProgramName(string name);
    void updateProgramCode(int code);
};
