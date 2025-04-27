#include <iostream>
using namespace std;

int findGCD(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findLCM(int a, int b) {
    return a * b / findGCD(a,b);
}

void output(int a, int b) {
    cout << "GCD: " << findGCD(a, b) << '\n';
    cout << "LCM: " << findLCM(a, b) << '\n';
}

int main() {
    int a, b;
    
    cout << "A = ";
    while(!(cin >> a)){
        cout << "Invalid input. Please try again: ";
        cin.clear();
        cin.ignore(100, '\n');
    }

    cout << "B = ";
    while(!(cin >> b)){
        cout << "Invalid input. Please try again: ";
        cin.clear();
        cin.ignore(100, '\n');
    }
    
    output(a, b);

}
