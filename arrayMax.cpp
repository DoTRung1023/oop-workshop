#include <iostream>

using namespace std;

double arrayMax(double* arrayNumber, int arrayLength) {
    // Why does the function need to return a double, and not a pointer?
    // because when return the pointer, the address of the temporary value is meaningless 
    // outside the scope of this function
    
    double max = arrayNumber[0];
    for (int i = 1; i<arrayLength; i++) {
        if (arrayNumber[i] > max) {
            max = arrayNumber[i];
        }
    }
    return max;
}