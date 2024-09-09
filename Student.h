#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <iostream>
#include "University.h"
#include "Course.h"
#include "Grade.h"
#include "Person.h"

using namespace std;

class Student: public Person
{
private:
    int id;
public:
    Student();
    Student(int id, string name);
    int get_id();
    void set_id(int id);
};

#endif