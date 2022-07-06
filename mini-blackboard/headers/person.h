#pragma once
#include <string>

using namespace std;

class person
{
protected:
    string emailAddress;
    string passWord;
    string loginStatus;
    string name;
    string phoneNumber;
    string role;
    int age;
    class miniBlackboard *blackBoard;

public:
    person(string email, string password, string loginstatus, string Name, string phoneNum, string Role, int Age, class miniBlackboard *bb)
    {
        emailAddress = email;
        passWord = password;
        loginStatus = loginstatus;
        name = Name;
        phoneNumber = phoneNum;
        role = Role;
        age = Age;
        blackBoard = bb;
    };
    ~person() {}
    virtual void personInfo() = 0;
    virtual string personName() = 0;

    void Login(string email, string password);
    void updatePersonName(string name);
    void updatePersonPhoneNumber(string phoneNumber);
    void updatePersonAge(int age);
};
