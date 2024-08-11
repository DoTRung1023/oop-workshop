#include <iostream>

using namespace std;

int* readNumbers(){
    int* array = new int[10];

    for (int i = 0; i<10; i++) {
        cin >> array[i];
    }

    return array;
}

void printNumbers(int* numbers, int length) {
    for (int i = 0; i<length; i++) {
        cout << i << " " << numbers[i] << endl;
    }
}

int secondSmallestSum(int *numbers,int length){
    int sum_length = 0;
    for (int i = 1; i <= length; i++) {
        sum_length += i;
    }
    int sum_array[sum_length];
    int sum_index = 0;
    
    for (int i = 0; i<length; i++) {
        int loop = length-i;
        while(loop > 0) {
            int current_sum = 0;
            for (int j = i; j<length + 1 - loop; j++) {
                current_sum += numbers[j];
            }
            sum_array[sum_index] = current_sum;
            sum_index++;
            loop--;
        }
    }
    int sort = 0;
    while (sort<sum_length) {
        for (int i = 0; i<sum_length-1-sort; i++) {
            if (sum_array[i] > sum_array[i+1]) {
                int temp = sum_array[i+1];
                sum_array[i+1] = sum_array[i];
                sum_array[i] = temp;
            }
        }
        sort++;
    }
    return sum_array[1];
}