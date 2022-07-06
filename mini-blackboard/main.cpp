#include <iostream>
#include "miniBlackboard.h"
#include "person.h"
#include "student.h"
#include "employee.h"
#include "teacher.h"
#include "administrator.h"
#include "course.h"
#include "courseInstance.h"
#include "program.h"
#include "programInstance.h"
#include "assessment.h"
#include "assignment.h"
#include "exam.h"

using namespace std;

int main()
{
    miniBlackboard Blackboard1;

    course course1("oop", 100, 2, 7.5, &Blackboard1);
    courseInstance courseInstance1(2022, &course1);
    program program1("datateknik", 202, &Blackboard1);
    programInstance programInstance1(2022, &program1);

    student newStudent(1, 2021, "tommystudent@email", "12345", "Active", "tommy", "074999", "student", 22, &Blackboard1);
    student newStudent2(2, 2022, "rodystudent@email", "12345", "Active", "rody", "190283190", "student", 25, &Blackboard1);
    teacher teacher1(219, "jerryteacher@email", "12345", "active", "jerry", "078888", "teacher", 44, &Blackboard1);
    teacher teacher2(319, "monicateacher@email", "12345", "disactive", "monica", "073567", "teacher", 35, &Blackboard1);
    administrator admin1(310, "rolanadmin@email", "12345", "disactive", "rolan", "055222", "admin", 55, &Blackboard1);
    administrator admin2(250, "joeyadmin@email", "12345", "active", "joey", "04333", "admin", 60, &Blackboard1);

    assessment assessment1(1, 2.5, "10/10/2022", &courseInstance1);
    exam exam1(&assessment1);
    assignment assignment1(&assessment1);

    admin1.addStudentToCourse(&newStudent, &courseInstance1);
    admin1.addStudentToCourse(&newStudent2, &courseInstance1);
    admin1.addTeacherToCourse(&teacher1, &courseInstance1);
    admin1.addTeacherToCourse(&teacher2, &courseInstance1);
    program1.addCourseToProgram(&course1);

    // TESTS ----->
    /*cout << newStudent.personInformation() << endl;
    cout << teacher1.personInformation() << endl;
    cout << admin1.personInformation() << endl;
    Blackboard1.personInformations(newStudent);
    Blackboard1.personInformations(teacher1);
    Blackboard1.personInformations(admin1);
    Blackboard1.courseStudentsAndTeachers(&courseInstance1);*/
    program1.whatCourses();
    newStudent.whatCourses();
    teacher1.whatCourses();

    return 0;
}
