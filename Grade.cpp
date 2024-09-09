#include <iostream>
#include "University.h"
#include "Student.h"
#include "Grade.h"

using namespace std;

Grade::Grade():Grade(0, 0, "", 0){}
Grade::Grade(int stud_id, int course_id, string assignment, int value){
    this->student_id = stud_id;
    this->course_id = course_id;
    this->assignment = assignment;
    this->value = value;
}

void Grade::set_assignment(string assignment){this->assignment = assignment;}
void Grade::set_value(int value){this->value = value;}
void Grade::set_course_id(int course_id){this->course_id = course_id;}
void Grade::set_student_id(int student_id){this->student_id = student_id;}

string Grade::get_assignment(){return assignment;}
int Grade::get_value(){return value;}
int Grade::get_course_id(){return value;}
int Grade::get_student_id(){return student_id;}
