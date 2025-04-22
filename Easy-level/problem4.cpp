#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter the 1st number: ";
    cin >> num1;

    cout << "Enter the 2nd number: ";
    cin >> num2;

    if(num1 > num2){
        cout << num1 << " is the maximum number\n";
    }
    else if(num1 < num2){
        cout << num2 << " is the maximum number\n";
    }
    else{
        cout << "The two number is equal\n";
    }
}
