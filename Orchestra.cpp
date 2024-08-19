#include <iostream>
#include <string>
#include "Orchestra.h"
#include "Musician.h"

using namespace std;

// default constructor
Orchestra::Orchestra(){
    size = 0;
    current_index = 0;
    arrayMember = new Musician[size];
}

// constructor for an orchestra of given size
Orchestra::Orchestra(int size) {
    this->size = size;
    current_index = 0;
    arrayMember = new Musician[size];
}

// returns the number of musicians who have joined the orchestra
int Orchestra::get_current_number_of_members(){
    return current_index;
}
// returns true if any musician in the orchestra plays the specified instrument
// otherwise returns false
bool Orchestra::has_instrument(std::string instrument){
    for(int i = 0; i<current_index; i++) {
        if (arrayMember[i].get_instrument() == instrument) {
            return true;
        }
    }
    return false;
}
// returns the array of members of the orchestra
Musician* Orchestra::get_members(){
    return arrayMember;
}     
// returns true and adds new musician to the orchestra if the orchestra is not full
// otherwise returns false
bool Orchestra::add_musician(Musician new_musician){
    if (current_index < size) {
        arrayMember[current_index] = new_musician;
        current_index++;
        return true;
    }
    else {
        return false;
    }
}

Orchestra:: ~Orchestra(){
    delete[] arrayMember;
}
