#pragma once
#include <vector>
#include <string>
#include "person.h"
#include "infoInterface.h"
#include "coursesInterface.h"

using namespace std;

class student : public person, public infoInterface, public coursesInterface
{
protected:
    int id;
    int classYear;
    vector<class courseInstance *> courses;
    class program *program;

public:
    student(int Id, int ClassYear, string email, string password, string loginstatus, string Name, string phoneNum, string Role, int Age, class miniBlackboard *bb) : person(email, password, loginstatus, Name, phoneNum, Role, Age, bb)
    {
        id = Id;
        classYear = ClassYear;
    }
    ~student() {}
    // Virtual fuctions: --->
    void personInfo();
    string personName();
    string personInformation() { return name + " " + phoneNumber + " " + role; }
    vector<class course *> whatCourses();

    // Class functions --->
    void coursesEnrolled();
    void addCourseToCoursesList(class courseInstance *course);
    void updateStudentId(int id);
    void updateClassYear(int year);
};
