#include <iostream>

using namespace std;

int main() {
    // when we assign the address of a variable to a pointer we can dereference 
    // the pointer to get the value stored in the address
    double number;
    char character;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Enter a character: ";
    cin >> character;

    double* number_pointer = &number;
    char* cha_pointer = &character;

    cout << "Number: " << *number_pointer << "\nCharacter: " << *cha_pointer << endl;

    return 0;
}