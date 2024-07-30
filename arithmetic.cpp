#include <iostream>

using namespace std;

extern void add();
extern void subtract();
extern void left_shift();
extern void right_shift();

int main() {
    int input;
    cout << "Enter (1) add\nEnter (2) subtract\nEnter (3) left shift\nEnter (4) right shift\nYour number: ";
    cin >> input;

    switch (input) {
        case 1:
            add();
            break;
        case 2:
            subtract();
            break;
        case 3:
            left_shift();
            break;
        case 4:
            right_shift();
            break;
        default:
            cout << "Invalid number!" << endl;
            break;
    }

    return 0;
}