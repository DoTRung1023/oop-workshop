#include <iostream>

using namespace std;

// part 2
void changeValue(double* number) {
    *number = 42;
}

// part 3
void printArray(double* number_array, int length) {
    for (int i = 0; i<length; i++) {
        cout << number_array[i] << " ";
    }
    cout << "\n";
}

// part 4
double arrayMax(double* arrayNumber, int arrayLength) {
    double max = arrayNumber[0];
    for (int i = 1; i<arrayLength; i++) {
        if (arrayNumber[i] > max) {
            max = arrayNumber[i];
        }
    }
    return max;
}

// part 6
double* dynamicArray(int number) {
    double* array = new double[number]();

    return array;
}

// part 7
double* dynamicArray(int length, double defaultValue) {
    double* array = new double[length];

    for (int i = 0; i<length; i++) {
        array[i] = defaultValue;
    }

    return array;
}


