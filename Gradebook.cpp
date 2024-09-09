#include <iostream>
#include "University.h"
#include "Grade.h"
#include "Gradebook.h"

using namespace std;
    
void Gradebook::addGrade(int stud_id, int course_id, string assignment, int value){
    Grade newGrade(stud_id, course_id, assignment, value);
    g[course_id] = newGrade;
}
