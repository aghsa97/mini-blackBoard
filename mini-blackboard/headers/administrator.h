#pragma once
#include <vector>
#include <string>
#include "employee.h"
#include "infoInterface.h"

using namespace std;

class administrator : public employee, public infoInterface
{
private:
    vector<class courseInstance *> courses;
    vector<class programInstance *> programs;
    class employee *employe;

public:
    administrator(int officeNum, string email, string password, string loginstatus, string Name, string phoneNum, string Role, int Age, class miniBlackboard *bb) : employee(officeNum, email, password, loginstatus, Name, phoneNum, Role, Age, bb){};
    ~administrator() {}

    // Virtual functions --->
    void pointToAdmin(class administrator *admin) { adminPointer = admin; }
    void pointToTeacher(class teacher *teacher) { teacherPointer = teacher; }
    string personInformation() { return name + " " + phoneNumber + " " + role; }

    // Class functions --->
    void addStudentToCourse(class student *student, class courseInstance *cours);
    void addTeacherToCourse(class teacher *teacher, class courseInstance *cours);
    void addProgram(string name, int code, class miniBlackboard *bb);
    void addCourse(string name, int code, int period, double points, class miniBlackboard *bb);
    void addStudent(int Id, int ClassYear, string email, string password, string loginstatus, string Name, string phoneNum, string Role, int Age, class miniBlackboard *bb);
    void addTeacher(int officeNum, string email, string password, string loginstatus, string Name, string phoneNum, string Role, int Age, class miniBlackboard *bb);
};
