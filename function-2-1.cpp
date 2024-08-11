#include <iostream>

using namespace std;

int* readNumbers(){
    int* array = new int[10];

    for (int i = 0; i<10; i++) {
        cout << "#" << i+1 << " num = ";
        cin >> array[i];
    }

    return array;
}

void printNumbers(int* numbers, int length) {
    for (int i = 0; i<length; i++) {
        cout << i << " " << numbers[i] << endl;
    }
}

void hexDigits(int *numbers,int length) {
    for (int i = 0; i<length; i++) {
        char hex_index = ' ';
        switch (numbers[i]) {
            case 0:
                hex_index = '0';
                break;
            case 1:
                hex_index = '1';
                break;
            case 2:
                hex_index = '2';
                break;
            case 3:
                hex_index = '3';
                break;
            case 4:
                hex_index = '4';
                break;
            case 5:
                hex_index = '5';
                break;
            case 6:
                hex_index = '6';
                break;
            case 7:
                hex_index = '7';
                break;
            case 8:
                hex_index = '8';
                break;
            case 9:
                hex_index = '9';
                break;
            case 10:
                hex_index = 'A';
                break;
            case 11:
                hex_index = 'B';
                break;
            case 12:
                hex_index = 'C';
                break;
            case 13:
                hex_index = 'D';
                break;
            case 14:
                hex_index = 'E';
                break;
            case 15:
                hex_index = 'F';
                break;
        }
        cout << i << " " << numbers[i] << " " << hex_index << endl;
    }
}