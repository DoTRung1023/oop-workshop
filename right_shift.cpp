#include <iostream>

using namespace std;

void right_shift() {
    int length;

    cout << "Enter length of binary: ";
    cin >> length;

    char* binary = new char[length];

    cout << "Enter binary: ";
    cin >> binary;
    
    char* return_binary = new char[length-1];

    for (int i = 0; i<length-1; i++) {
        return_binary[i] = binary[i];
    }
    cout << "Right shift binary is: " << return_binary << endl;
}