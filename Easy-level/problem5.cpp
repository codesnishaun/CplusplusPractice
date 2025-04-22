// Simple console calculator

#include <iostream>
#include <limits>
using namespace std;

int main() {
    char continuation;
    char operation;
    double num1, num2;

    do{
        cout << "Enter the first number: ";
        cin >> num1;
    
        cout << "Enter the second number: ";
        cin >> num2;
        
        cout << "Enter the operation(+, -, *, /): ";
        cin >> operation;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
        double ans;
        switch(operation) {
            case '+':
                ans = num1 + num2;
                cout << num1 << " + " << num2 << " = " << ans << '\n';
                break;
            case '-':
                ans = num1 - num2;
                cout << num1 << " - " << num2 << " = " << ans << '\n';
                break;
            case '*':
                ans = num1 * num2;
                cout << num1 << " * " << num2 << " = " << ans << '\n';
                break;
            case '/':
            if(num2 == 0){
                cout << "Undefined\n";
                break;
            }
                ans = num1 / num2;
                cout << num1 << " / " << num2 << " = " << ans << '\n';
                break;
            default:
                cout << "invalid operation\n";
                break;
        }
        cout << "Want to try again(y/n): ";
        cin >> continuation;
    }while(tolower(continuation) == 'y');

    cout << "Thankyouu\n";
}
