#include <iostream>
#include "University.h"
#include "Grade.h"
#include "Person.h"
#include "Course.h"

using namespace std;

Course::Course():Course(0, ""){}
// Course::Course(int id, string name, int max_persons){
Course::Course(int id, string name){
    // current_persons = 0;
    // this->max_persons = max_persons;
    this->id = id;
    this->name = name;
    // persons = new Person*[max_persons];
}

void Course::addPerson(Person* p){
    // if(current_persons < max_persons){
        // persons[current_persons] = p;
    //     cout << "Person is added successfully" << endl;
    //     current_persons++;
    // }
    // else {
    //     cout << "Course is fully" << endl;
    // }
    persons[id] = p;
}

string Course::get_name(){
    return name;
}
int Course::get_id(){
    return id;
}

void Course::set_name(string name){
    this->name = name;
}

void Course::set_id(int id){
    this->id = id;
}

// int Course::get_max(){
//     return max_persons;
// }
// int Course::get_current_persons(){
//     return current_persons;
// }

// void Course::set_max(int max_persons){
//     this->max_persons = max_persons;
// }
// void Course::set_current_persons(int current_persons){
//     this->current_persons = current_persons;
// }