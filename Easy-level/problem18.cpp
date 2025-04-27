#include <iostream>
using namespace std;

int main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    bool isLeapyear = (year % 4 == 0 && year % 100 != 0)
                     || (year % 400 == 0);

    cout << year << (isLeapyear ? " is leapyear\n" : " is not leapyear\n");
}
