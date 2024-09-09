#include <iostream>
#include "University.h"
#include "Student.h"
#include "Course.h"
#include "Grade.h"
#include "Person.h"

using namespace std;

Student::Student():Student(0, ""){}

Student::Student(int id, string name): id(id), Person(name){}

int Student::get_id(){
    return id;
}
void Student::set_id(int id){
    this->id = id;
}

