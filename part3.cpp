#include <iostream> 

using namespace std;

extern void printArray(double*, int);

int main() {
    // How do you pass an array to a function in C++ and why is it done this way?
    // I need to pass the initialised name of the array along with its length. This is
    // because we only pass in the address of the array; thus, there is no way to know the 
    // length of the array. 

    // What does the size argument represent and why is it necessary?
    // The size gives me information about the length of the array. Therefore, we know when to 
    // stop when doing for loop or while loop

    int length;
    cout << "Enter the length: ";
    cin >> length;

    double* number_array = new double[length];

    for (int i = 0; i<length; i++) {
        cout << "#" << i+1 << " number: ";
        cin >> number_array[i];
    }

    printArray(number_array, length);

    delete[] number_array;

    return 0;
}