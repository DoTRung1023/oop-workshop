#include <iostream>

using namespace std;

int main() {
    // How would you extend this algorithm to make it usable for any transformation?

    int base_input = 0;
    int base_len = 0;

    cout << "What base do you want to convert to base 2?  ";
    cin >> base_input;

    cout << "Enter the length of base " << base_input << ": ";
    cin >> base_len; 

    char* base_random = new char[base_len+1];

    cout << "Enter a base " << base_input << " number: ";
    cin >> base_random;  

    int base10_num = 0;

    for (int i = 0; i<base_len; i++) {
        int time;
        if (base_random[i] <= '9') {
            time = base_random[i] - '0';
        }
        else {
            time = base_random[i] - 55;           
        }
        base10_num += time*pow(base_input, base_len-1-i);
    }

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
