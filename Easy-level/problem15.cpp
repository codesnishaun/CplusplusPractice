#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    if(num < 0) num = -num;
    
    while(num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int num;

    cout << "Enter a positive number if not it will be converted to positive\n";
    cout << "Enter a number: ";
    while(!(cin >> num)){
        cout << "Invalid Input. Please try again: ";
        cin.clear();
        cin.ignore(100, '\n');
    }

    cout << "The sum of digits " << num << " is " << sumOfDigits(num);

}
