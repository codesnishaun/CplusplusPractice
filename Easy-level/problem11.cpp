#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrongNumber(int num) {
    if(num > 0){
        return false;
    }
    int numberOfDigit = 0;
    int armstrong = 0;
    int copy = num;

    while(copy != 0){
        copy /= 10;
        ++numberOfDigit;
    }

    copy = num;

    while(copy != 0){
        armstrong += pow(copy % 10, numberOfDigit);
        copy /= 10;
    }

    return armstrong == num;
}

int main() {
    int num;

    cout << "Enter a number: ";
    while(!(cin >> num)) {
        cout << "Invalid input, try again: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    if(isArmstrongNumber(num)){
        cout << num << " is an armstrong number\n";
    }else{
        cout << num << " is not an armstrong number\n";
    }
}
