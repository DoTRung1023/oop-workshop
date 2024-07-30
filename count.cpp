#include <iostream>

int count(int array[], int n) {
    int even_number = 0;
    for (int i = 0; i<n; i++) {
        if (array[i]%2==0) {
            even_number++;
        }
    }
    return even_number;
}