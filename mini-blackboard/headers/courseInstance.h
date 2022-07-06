#pragma once
#include <vector>

using namespace std;

class courseInstance
{
protected:
    int courseYear;
    vector<class assessment *> assessments;
    vector<class administrator *> administrators;
    vector<class student *> students;
    vector<class teacher *> teachers;

public:
    class course *course;
    courseInstance(int courseYear, class course *cours);
    ~courseInstance() {}
    void updateCourseYear(int year);
    void enrolledStudents();
    void enrolledTeachers();
    void courseInstanceInfo();
    void addStudentToStudentsList(class student *student);
    void addTeacherToTeachersList(class teacher *teacher);
    void addAdminToAdminList(class administrator *admin);
    void addAssessmentsToAssessmentsList(class assessment *assessment);
    vector<class student *> studentList();
    vector<class teacher *> teacherList();
    string getCourseName();
};
