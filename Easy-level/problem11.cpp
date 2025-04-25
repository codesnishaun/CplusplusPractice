#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrongNumber(int num) {
    int numberOfDigit = 0;
    int armstrong = 0;
    int copy = num;

    while(copy > 0){
        copy /= 10;
        ++numberOfDigit;
    }

    copy = num;

    for(int i = 0; i < numberOfDigit; ++i){
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
        cin.ignore(100, '\n');
    }

    if(isArmstrongNumber(num)){
        cout << num << " is an armstrong number\n";
    }else{
        cout << num << " is not an armstrong number\n";
    }
}
