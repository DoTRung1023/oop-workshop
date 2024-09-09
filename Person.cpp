#include <iostream>
#include "University.h"
#include "Student.h"
#include "Grade.h"
#include "Course.h"
#include "Person.h"

using namespace std;

Person::Person():Person(""){}

Person::Person(string name): name(name){}
