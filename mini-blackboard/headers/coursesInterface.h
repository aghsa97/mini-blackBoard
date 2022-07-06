#pragma once
#include <vector>

using namespace std;

class coursesInterface
{

public:
    coursesInterface(){};
    ~coursesInterface(){};
    virtual vector<class course *> whatCourses() = 0;
};
