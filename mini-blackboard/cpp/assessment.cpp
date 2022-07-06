#include <iostream>
#include "assessment.h"
#include "courseInstance.h"
#include "exam.h"
#include "assignment.h"

using namespace std;

assessment::assessment(int Id, float Score, string deadLine, courseInstance *cours)
{
    id = Id;
    score = Score;
    deadline = deadLine;
    course = cours;
}

void assessment::updateDeadLine(string deadLine)
{
    deadline = deadLine;
}
void assessment::updateId(int Id)
{
    id = Id;
}
void assessment::updateScore(float Score)
{
    score = Score;
}
void assessment::updateCourse(courseInstance *cours)
{
    course = cours;
}
