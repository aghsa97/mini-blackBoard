#include <iostream>
#include "employee.h"
#include "teacher.h"
#include "administrator.h"
#include "person.h"

using namespace std;

void employee::updateOfficeNumber(int officeNum)
{
    officeNumber = officeNum;
}
void employee::personInfo()
{
    cout << "Office Number: " << officeNumber << endl;
    cout << "Name: " << name << endl;
    cout << "Email: " << emailAddress << endl;
    cout << "Status: " << loginStatus << endl;
    cout << "Role: " << role << endl;
    cout << "Phone Number: " << phoneNumber << endl;
    cout << "Age: " << age << endl;
}
string employee::personName()
{
    return name;
}
