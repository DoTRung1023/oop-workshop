#include <iostream>
#include "University.h"

using namespace std;

University::University():University("", ""){}

University::University(string name, string location): name(name), location(location){}

void University::addCourse(int id, string name){
    Course newCourse(id, name);
    courses[id] = newCourse;
}

void University::set_name(string name){
    this->name = name;
}
string University::get_name(){
    return name;
}

void University::set_location(string location){
    this->location = location;
}

string University::get_location(){
    return location;
}

Course University::get_course(int id){
    return courses[id];
}