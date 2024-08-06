#include <iostream>

using namespace std;

double* dynamicArray(int length, double defaultValue) {
    // Can you explain what happens when you initialize the array elements with 
    // the value M in the dynamicArray function?
    // An array will be initialies in the heap with all values of all cells equalled to value M

    // What might be a practical application of initializing an array with a specific value?
    // when I set a default value like this, I can avoid having gabbage value. In addition, when 
    // knowing the initial values, I can work with that later more precisely

    double* array = new double[length];

    for (int i = 0; i<length; i++) {
        array[i] = defaultValue;
    }

    return array;
}