#include <iostream>

using namespace std;

extern double arrayMax(double*, int);

int main() {
    int length;
    cout << "Enter the length: ";
    cin >> length;

    double number_array[length];

    for (int i = 0; i<length; i++) {
        cout << "#" << i+1 << " number: ";
        cin >> number_array[i];
    }
    cout << "The max value is: " << arrayMax(number_array, length) << endl;

    return 0;
}