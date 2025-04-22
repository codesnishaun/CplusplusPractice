// Factoring a number

#include <iostream>
using namespace std;

int main() {
    int num;
    long long factorial = 1;

    cout << "Enter a number for factorial: ";
    cin >> num;

    for(int i = 1; i <= num; ++i){
        factorial *= i;
    }

    cout << "\nThe factorial of " << num << " is " << factorial << '\n';
}

