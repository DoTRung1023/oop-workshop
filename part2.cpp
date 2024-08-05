#include <iostream>

using namespace std;

extern void changeValue(double*);

int main() {
    // Can you explain how passing a pointer to a function 
    // can be used to modify the original variable value?
    // When we pass in a pointer, we pass in the address in the memory. 
    // Therefore, we can change it.

    // What would happen if we passed the double directly 
    // to the function rather than a pointer?
    // If we pass the value instead of the address, the value in the stack memory will disappear
    // outside the initial function. In the changeValue function, the variable number is just a 
    // copy of the initial variable if we change its value, the value in the initial variable 
    // remains unchanged

    double* number = new double;
    double number2;

    cout << "Enter a number: ";
    cin >> *number;

    cout << "Enter a number2: ";
    cin >> number2;

    changeValue(number);
    changeValue(&number2);

    cout << "The new value is: " << *number << endl;
    cout << "The new value is: " << number2 << endl;

    delete number;

    return 0;
}
