#ifndef GRADE_H
#define GRADE_H

#include <iostream>
#include "University.h"
#include "Student.h"

using namespace std;

class Grade 
{
private:
    string assignment;
    int value;
    int course_id;
    int student_id;
public:
    Grade();
    Grade(int stud_id, int course_id, string assignment, int value);

    void set_assignment(string assignment);
    void set_value(int value);
    void set_course_id(int course_id);
    void set_student_id(int student_id);

    string get_assignment();
    int get_value();
    int get_course_id();
    int get_student_id();
};

#endif