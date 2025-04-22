// Even odd checker

#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(num % 2 == 0){
        cout << num << " is even number\n";
        return 0;
    }
    cout << num << " is odd number\n";
}
