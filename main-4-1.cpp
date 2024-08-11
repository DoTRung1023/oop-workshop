#include <iostream>

using namespace std;

extern void printNumbers(int*, int);
extern int* readNumbers();
extern int secondSmallestSum(int*,int);

int main(){
    int* array = readNumbers();

    cout << "The second smallest sum is:" << endl;
    cout << secondSmallestSum(array, 10) << endl;

    delete[] array;

    return 0;
}