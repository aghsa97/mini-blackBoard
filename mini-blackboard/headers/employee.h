#pragma once
#include <string>
#include "person.h"

using namespace std;

class employee : public person
{
protected:
    int officeNumber;
    class teacher *teacherPointer;
    class administrator *adminPointer;

public:
    employee(int officeNum, string email, string password, string loginstatus, string Name, string phoneNum, string Role, int Age, class miniBlackboard *bb) : person(email, password, loginstatus, Name, phoneNum, Role, Age, bb)
    {
        officeNumber = officeNum;
    };
    ~employee() {}
    // Virtual functions --->
    void personInfo();
    string personName();

    // Class functions --->
    void updateOfficeNumber(int officeNum);
    virtual void pointToTeacher(class teacher *teacher) = 0;
    virtual void pointToAdmin(class administrator *admin) = 0;
};
