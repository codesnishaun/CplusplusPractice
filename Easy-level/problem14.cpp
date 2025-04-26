#include <iostream>
using namespace std;

int reversed(int num) {
    int reverse = 0;
    bool isNegative = (num < 0);
    num = -num;

    while(num > 0) {
        reverse = (reverse * 10) + (num % 10);
        num /= 10;
    }

    return isNegative ? -reverse : reverse;
}

int main() {
    int num;

    cout << "Enter a number: ";
    while(!(cin >> num)) {
        cout << "Invalid input. Please try again: ";
        cin.clear();
        cin.ignore(100, '\n');
    }

    cout << "Input: " << num << '\n';
    cout << "Reverse: " << reversed(num) << '\n';

    return 0;
}
