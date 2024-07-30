#include <iostream>

using namespace std;

int main() {
    int length1;
    int length2;

    cout << "Enter length of binary #1: ";
    cin >> length1;
    cout << "Enter length of binary #2: ";
    cin >> length2;

    char* binary1 = new char[length1];
    char* binary2 = new char[length2];

    cout << "Enter binary #1: ";
    cin >> binary1;
    cout << "Enter binary #2: ";
    cin >> binary2;

    int temp_length;
    if (length1 > length2) {
        temp_length = length1+1;
    }
    else {
        temp_length = length2+1;
    }
    char* temp_result = new char[temp_length];

    int actual_length = 0;
    int remain = 0;

    for (int i = 0; i<temp_length; i++) {
        if (i < length1) {
            if (binary1[length1-1-i] == '0')
                remain += 0;
            else {
                remain += 1;
            }
        }
        if (i < length2) {
            if (binary2[length2-1-i] == '0')
                remain += 0;
            else {
                remain += 1;
            }
        }
        if (remain == 2) {
            temp_result[i] = '0';
            remain = 1;
        }
        else if (remain == 3) {
            temp_result[i] = '1';
            remain = 1;
        }
        else if (remain == 1) {
            temp_result[i] = '1';
            remain = 0;
        }
        else if (remain == 0) {
            temp_result[i] = '0';
            remain = 0;
        }
        actual_length++;
        if (i >= length1 && i >= length2 && remain == 0) {
            break;
        }
    }
    char* actual_result = new char[actual_length];

    for (int i = 0; i < actual_length; i++) {
        actual_result[actual_length - 1 - i] = temp_result[i];
    }

    cout << "The result of this addition is: " << actual_result << endl;

    delete[] binary1;
    delete[] binary2;
    delete[] temp_result;
    delete[] actual_result;

    return 0;
}