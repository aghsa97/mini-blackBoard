#include <iostream>
#include "exam.h"
#include "assessment.h"

using namespace std;

exam::exam(assessment *assessment)
{
    assessments = assessment;
}
