#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include "University.h"
#include "Student.h"
#include "Grade.h"
#include "Course.h"

using namespace std;

class Person
{
protected:
    string name;
public:
    Person();
    Person(string name);
};

#endif