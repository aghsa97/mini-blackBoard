#pragma once
#include <vector>
#include <string>
#include "employee.h"
#include "infoInterface.h"
#include "coursesInterface.h"
#include "courseInstance.h"

using namespace std;

class teacher : public employee, public infoInterface, public coursesInterface
{
private:
    vector<class courseInstance *> courses;

public:
    teacher(int officeNum, string email, string password, string loginstatus, string Name, string phoneNum, string Role, int Age, class miniBlackboard *bb) : employee(officeNum, email, password, loginstatus, Name, phoneNum, Role, Age, bb){};
    ~teacher() {}
    // Virtual functions --->
    void pointToTeacher(class teacher *teacher) { teacherPointer = teacher; }
    void pointToAdmin(class administrator *admin) { adminPointer = admin; }
    string personInformation() { return name + " " + phoneNumber + " " + role; }
    vector<class course *> whatCourses();

    // class functions --->
    void coursesAssignedTo();
    void addCourseToCoursesList(class courseInstance *course);
};
