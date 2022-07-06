#pragma once
#include <string>

using namespace std;

class assessment
{
private:
    int id;
    float score;
    string deadline;
    class courseInstance *course;
    class exam *exams;
    class assignment *assignments;

public:
    assessment(int id, float score, string deadLine, class courseInstance *cours);
    ~assessment() {}
    void updateId(int id);
    void updateScore(float Score);
    void updateDeadLine(string deadLine);
    void updateCourse(class courseInstance *cours);
};
