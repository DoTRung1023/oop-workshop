#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int base10_num = 0;

    cout << "Enter a base 10 number: ";
    cin >> base10_num;

    int base2_len = 1;

    int test = 1;

    while (test < base10_num) {
        test *= 2;
        base2_len++;
    }
    char* base2_num = new char[base2_len];

    int remain = base10_num;

    for (int i = base2_len-1; i>=0; i--) {
        if (remain < pow(2, i)) {
            base2_num[base2_len-1-i] = '0';
        }
        else if (remain == 0) {
            base2_num[base2_len-1-i] = '0';
        }
        else if (remain >= pow(2, i)) {
            base2_num[base2_len-1-i] = '1';
            remain -= pow(2, i);
        }
    }
    cout << "That number in base 2 is = " << base2_num << endl;

    delete[] base2_num;

    return 0;
}