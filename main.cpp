#include "workshop.h"
#include <iostream>

int main() {
    // // part 2
    // double number2;

    // cout << "Enter a number: ";
    // cin >> number2;

    // changeValue(&number2);

    // cout << "The new value is: " << number2 << endl;

    // // part 3
    // int length3;
    // cout << "Enter the length: ";
    // cin >> length3;

    // double* number_array3 = new double[length3];

    // for (int i = 0; i<length3; i++) {
    //     cout << "#" << i+1 << " number: ";
    //     cin >> number_array3[i];
    // }

    // printArray(number_array3, length3);

    // delete[] number_array3;

    // // part 4
    // int length4;
    // cout << "Enter the length: ";
    // cin >> length4;

    // double number_array4[length4];

    // for (int i = 0; i<length4; i++) {
    //     cout << "#" << i+1 << " number: ";
    //     cin >> number_array4[i];
    // }
    // cout << "The max value is: " << arrayMax(number_array4, length4) << endl;
     
    // // part 6
    // int number6;
    // cout << "Enter a number: ";
    // cin >> number6;
    // double* array6 = dynamicArray(number6);

    // cout << "Start: " << endl;
    // for (int i = 0; i<number6; i++) {
    //     cout << array6[i] << "\t";
    // }
    // cout << endl;
    // for (int i = 0; i<number6; i++) {
    //     cout << "#" << i+1 << " number: ";
    //     cin >> array6[i];
    // }
    // cout << "End: " << endl;
    // for (int i = 0; i<number6; i++) {
    //     cout << array6[i] << "\t";
    // }
    // cout << endl;
    // cout << "The max value is: " << arrayMax(array6, number6) << endl;
    
    // delete[] array6;

    // // part 7
    // double number7;
    // cout << "Enter a default number: ";
    // cin >> number7;

    // int length7;
    // cout << "Enter the length: ";
    // cin >> length7;

    // double* array7 = dynamicArray(length7, number7);

    // cout << "The array is: " << endl;
    // for (int i = 0; i<length7; i++) {
    //     cout << array7[i] << "\t";
    // }
    // cout << endl;

    // delete[] array7;

    // return 0;

    // part 8
    int length8;
    cout << "Enter the length: ";
    cin >> length8;

    double* array8 = dynamicArray(length8);
    for (int i = 0; i<length8; i++) {
        cout << "#" << i+1 << " number: ";
        cin >> array8[i];
    }
    printArray(array8, length8);
    
    cout << "The maximum value is: " << arrayMax(array8, length8) << endl;

    delete[] array8;

    return 0;
}