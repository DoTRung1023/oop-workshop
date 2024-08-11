#include <iostream>

using namespace std;

extern void printNumbers(int*, int);
extern int* readNumbers();
extern void hexDigits(int*, int);
extern bool equalsArray(int*, int*, int);

int main() {
    int* array1 = readNumbers();
    int* array2 = readNumbers();

    bool result = equalsArray(array1, array2, 10);

    if (result == true) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;       
    }

    delete[] array1;
    delete[] array2;

    return 0;
}