#include <iostream>
using namespace std;

int main() {
    double temp;

    cout << "Enter celsius to convert to fahrenheit: ";
    cin >> temp;

    cout << temp << "°C is equivalent to ";
    temp = (1.8 * temp) + 32;
    cout << temp << "°F\n";
}
