#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include <iostream>
#include "University.h"
#include "Person.h"
#include "Instructor.h"
#include "Person.h"

using namespace std;

class Instructor: public Person
{
public: 
    Instructor();
    Instructor(string name);
};

#endif