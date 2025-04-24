#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> num;

    if(num <= 1){
        cout << num <<" is not a prime number\n";
        return 0;
    }
    for(int i = 2; i <= sqrt(num); ++i){
        if(num % i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime){
        cout << num << " is a prime number\n";
        return 0;
    }
    cout << num << " is not a prime number\n";
}
