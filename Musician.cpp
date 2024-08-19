#include "Musician.h"

using namespace std;

Musician::Musician()
{
    instrument = "\0";
    experience = 0;
}

Musician::Musician(std::string instrument, int experience)
{
    this->experience = experience;
    this->instrument = instrument;
}

std::string Musician::get_instrument()
{
    return this->instrument;
}

int Musician::get_experience()
{
    return this->experience;
}
