#include <iostream>

using namespace std;

extern void printNumbers(int*, int);
extern int* readNumbers();
extern void hexDigits(int*, int);
extern bool equalsArray(int*, int*, int);
extern int* reverseArray(int*,int);

int main() {
    int* array = readNumbers();
    int* return_array = reverseArray(array, 10);

    bool result = equalsArray(array, return_array, 10);

    if (result == true) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;       
    }

    delete[] array;
    delete[] return_array;

    return 0;
}