#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    if(num < 0 || num % 10 == 0 && num != 0) {
        return false;
    }

    int reversed = 0;

    while(num > reversed){
        reversed = (reversed * 10) + (num % 10);
        num /= 10;
    }

    return num == reversed || num == reversed / 10;
}

int main() {
    int num;

    cout << "Enter a number: ";
    while(!(cin >> num)){
        cout << "Invalid input, try again: ";
        cin.clear();
        cin.ignore(100, '\n');
    }

    if(isPalindrome(num)){
        cout << num << " is palindrome\n";
        return 0;
    }
    cout << num << " is not a palindrome\n";
}
