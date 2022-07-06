#pragma once
#include <vector>
#include "infoInterface.h"

using namespace std;

class miniBlackboard
{

private:
    vector<class person *> people;
    vector<class course *> courses;
    vector<class program *> programs;

public:
    miniBlackboard() {}
    ~miniBlackboard() {}

    void personInformations(infoInterface &obj);
    void courseStudentsAndTeachers(class courseInstance *course);
    void addPersonToPeopleList(class person *person);
    void addCourseToCoursesList(class course *course);
    void addProgramToProgramsList(class program *program);

    vector<class person *> peopleList();
};
