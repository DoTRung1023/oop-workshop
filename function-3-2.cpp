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

bool equalsArray(int *numbers1,int *numbers2,int length){
    if (length < 1) {
        return false;
    }
    for (int i = 0; i<length; i++) {
        if (numbers1[i] != numbers2[i]) {
            return false;
        }
    }
    return true;
}

int *reverseArray(int *numbers1,int length){
    int* new_array = new int[length];
    for (int i = length-1; i>=0; i--) {
        new_array[length-1-i] = numbers1[i];
    }
    return new_array;
}