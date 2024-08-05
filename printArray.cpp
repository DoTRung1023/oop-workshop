#include <iostream> 

using namespace std;

void printArray(double* number_array, int length) {
    cout << "The numbers are: ";
    for (int i = 0; i<length; i++) {
        cout << number_array[i] << "\t";
    }
    cout << "\n";
}