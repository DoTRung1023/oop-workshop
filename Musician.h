#ifndef MUSICIAN_H
#define MUSICIAN_H

#include <string>

using namespace std;

class Musician {
private:
    int experience;
    string instrument;
public:
    // a default constructor
    Musician();  
    // a constructor that takes the instrument played and the years of experience
    Musician(std::string instrument, int experience);      
    // returns the instrument played
    std::string get_instrument();    
    // returns the number of years experience
    int get_experience();       
};

#endif
