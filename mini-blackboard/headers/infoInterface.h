#pragma once
#include <string>

using namespace std;

class infoInterface
{

public:
    infoInterface(){};
    ~infoInterface(){};
    virtual string personInformation() = 0;
};
