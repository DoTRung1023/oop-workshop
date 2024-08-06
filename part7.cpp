#include <iostream>

using namespace std;

extern double* dynamicArray(int , double);


int main() {
    double number7;
    cout << "Enter a default number: ";
    cin >> number7;

    int length7;
    cout << "Enter the length: ";
    cin >> length7;

    double* array7 = dynamicArray(length7, number7);

    cout << "The array is: " << endl;
    for (int i = 0; i<length7; i++) {
        cout << array7[i] << "\t";
    }
    cout << endl;

    delete[] array7;

    return 0;
}