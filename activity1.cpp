#include <iostream>

using namespace std;

int main() {
    char base2_num[] = "110111011";

    int actual_num = 0;

    int base_len = strlen(base2_num);

    for (int i = 0; i < base_len; i++) {
        int time = base2_num[i] - '0';
        actual_num += time*pow(2, base_len-i-1);
    }
    cout << "base-10 is: " << actual_num << endl;
    // 75 in base 10 is 01001011 in base 2
}