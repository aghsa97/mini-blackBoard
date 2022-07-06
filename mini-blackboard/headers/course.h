#pragma once
#include <string>

using namespace std;

class course
{
private:
    string name;
    int courseCode;
    int givinPeriod;
    double numberOfPoints;
    class miniBlackboard *blackBoard;

public:
    course(string Name, int courCode, int period, double numOfPoints, class miniBlackboard *bb);
    ~course() {}
    void updateCourseName(string Name);
    void updateCourseCode(int code);
    void updateGivinPeriod(int period);
    void updateNumOfPoints(double numOfPoints);
    void courseInfo();
    string getCourseName();
};
