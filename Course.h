#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include "University.h"
#include "Grade.h"
#include "Person.h"

using namespace std;

class Course
{
private:
    Person** persons;
    string name;
    int id;
    // int max_persons;
    // int current_persons;
public:
    Course();
    // Course(int id, string name, int max_persons);
    Course(int id, string name);

    void addPerson(Person* p);

    string get_name();
    int get_id();

    void set_name(string name);
    void set_id(int id);

    // int get_max();
    // int get_current_persons(); 

    // void set_max(int max_persons);
    // void set_current_persons(int current_persons);
};

#endif