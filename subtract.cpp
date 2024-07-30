#include <iostream>

using namespace std;

void subtract() {
    int length_minuend;
    int length_subtrahend;

    cout << "Enter length of minuend: ";
    cin >> length_minuend;
    cout << "Enter length of subtrahend: ";
    cin >> length_subtrahend;

    char* minuend = new char[length_minuend];
    char* subtrahend = new char[length_subtrahend];

    cout << "Enter minuend: ";
    cin >> minuend;
    cout << "Enter subtrahend: ";
    cin >> subtrahend;

    char* result = new char[length_minuend];

    int remain = 0;

    for (int i = 0; i<length_minuend; i++) {
        if (minuend[length_minuend-1-i] == '0')
            remain += 0;
        else {
            remain += 1;
        }
        if (i < length_subtrahend) {
            if (subtrahend[length_subtrahend-1-i] == '0')
                remain -= 0;
            else {
                remain -= 1;
            }
        }
        if (remain == -1) {
            result[i] = '1';
            remain = -1;
        }
        else if (remain == -2) {
            result[i] = '0';
            remain = -1;
        }
        else if (remain == 1) {
            result[i] = '1';
            remain = 0;
        }
        else if (remain == 0) {
            result[i] = '0';
            remain = 0;
        }
    }
    for (int i = 0; i < length_minuend/2; i++) {
        int temp = result[i];
        result[i] = result[length_minuend - 1 - i];
        result[length_minuend - 1 - i] = temp;
    }

    cout << "The result of this subtraction is: " << result << endl;

    delete[] minuend;
    delete[] subtrahend;
    delete[] result;
}