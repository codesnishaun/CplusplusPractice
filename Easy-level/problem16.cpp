#include <iostream>
using namespace std;

void findGCD(int a, int b) {
    int first, seccond;
    while(a % b != 0) {
        a = a % b;
        int temp = b;
        b = a;
        a = temp;

    }
    cout << b << " is the GCD of 270 and 192\n";
}

int main() {
    int a, b;
    
    cout << "A = ";
    cin >> a;

    cout << "B = ";
    cin >> b;

    findGCD(a, b);
}
