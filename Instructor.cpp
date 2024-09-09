#include <iostream>
#include "University.h"
#include "Person.h"
#include "Instructor.h"

using namespace std;

Instructor::Instructor():Instructor(""){}
Instructor::Instructor(string name): Person(name){}
