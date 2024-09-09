#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <iostream>
#include "Course.h"
#include "Gradebook.h"

using namespace std;

class University
{
private:
    string name;
    string location;
    Course* courses;
    Gradebook gradebook;
public:
    University();
    University(string name, string location);

    void addCourse(int id, string name);

    void set_name(string name);
    string get_name();

    void set_location(string location);
    string get_location();

    Course get_course(int id);
};

#endif