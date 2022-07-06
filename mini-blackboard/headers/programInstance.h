#pragma once
#include <vector>

using namespace std;
class programInstance
{
private:
    int startYear;
    vector<class student *> students;
    class program *program;

public:
    programInstance(int year, class program *prog);
    ~programInstance() {}
    void addStudentToProgramInstance(class student *student);
    void updateStartYear(int year);
    void enrolledStudents();
};
