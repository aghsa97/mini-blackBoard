#include <iostream>
#include "course.h"
#include "miniBlackboard.h"

using namespace std;

course::course(string Name, int courCode, int period, double numOfPoints, miniBlackboard *bb)
{
    name = Name;
    courseCode = courCode;
    givinPeriod = period;
    numberOfPoints = numOfPoints;
    blackBoard = bb;
}
void course::updateCourseName(string Name)
{
    name = Name;
}
void course::updateCourseCode(int code)
{
    courseCode = code;
}
void course::updateGivinPeriod(int period)
{
    givinPeriod = period;
}
void course::updateNumOfPoints(double numOfPoints)
{
    numberOfPoints = numOfPoints;
}
void course::courseInfo()
{
    cout << "Name: " << name << endl;
    cout << "Course Code: " << courseCode << endl;
    cout << "Number of points: " << numberOfPoints << endl;
}
string course::getCourseName()
{
    return name;
}
