// Swapping two numbers

#include <iostream>
using namespace std;

int main() {
    int x = 12;
    int y = 18;
    int temp;
    
    cout << "x: " << x << '\n';
    cout << "y: " << y << '\n';

    temp = x;
    x = y;
    y = temp;

    cout << "\nx: " << x << '\n';
    cout << "y: " << y << '\n';
}
