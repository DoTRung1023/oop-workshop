#include <iostream>
#include "University.h"
#include "Grade.h"
#include "Person.h"
#include "Course.h"
#include "Student.h"
#include "Gradebook.h"
#include "Instructor.h"

using namespace std;

int main(){
    University u("Uni Adelaide", "Adelaide");

    u.addCourse(10, "Maths 1006 Data taming and prediction");

    Person* stu1 = new Student(12, "messi");

    u.get_course(10).addPerson(stu1);

    Gradebook gb1;

    gb1.addGrade(12, 10, "Mid term", 100);

    return 0;
}