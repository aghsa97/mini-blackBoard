#include <iostream>
#include <vector>
#include "person.h"
#include "miniBlackboard.h"

using namespace std;

void person::Login(string email, string password)
{
    if (emailAddress == email && passWord == password)
    {
        loginStatus = "Active";
        cout << "loginstatus: " << loginStatus << endl;
    }
    else
    {
        loginStatus = "Disactive";
        cout << "loginstatus: " << loginStatus << endl;
    }
}
void person::updatePersonAge(int Age)
{
    age = Age;
}
void person::updatePersonPhoneNumber(string phone)
{
    phoneNumber = phone;
}
void person::updatePersonName(string Name)
{
    name = Name;
}

string person::personName()
{
    return name;
}
