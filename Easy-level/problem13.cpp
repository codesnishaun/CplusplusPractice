#include <iostream>
using namespace std;

int countDigit(int num) {
    int count = 0;
    
    if(num == 0) return 1;

    while(num > 0){
        num /= 10;
        ++count;
    }

    return count;
}

int main() {
    int num;

    cout << "Enter a number: ";
    while(!(cin >> num)){
        cout << "Invalid input. Please enter a number: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    if(num < 0){
        num = -num;
    }

    cout << "There's " << countDigit(num) << " digit on the integer\n";
}
