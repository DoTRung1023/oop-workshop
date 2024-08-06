#include <iostream>

using namespace std;

extern double* dynamicArray(int);

int main() {
    // Why do we need to return a pointer from the dynamicArray function?
    // because type of the return value of the function is pointer to a double
    // when returning a dynamic address like this, I can access the value and change it 

    int number5;
    cout << "Enter a number: ";
    cin >> number5;
    double* array5 = dynamicArray(number5);

    for (int i = 0; i<number5; i++) {
        cout << array5[i] << "\t";
    }
    cout << endl;
    delete[] array5;

    return 0;
}