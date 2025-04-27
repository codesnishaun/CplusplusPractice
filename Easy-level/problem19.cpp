#include <iostream>
#include <iomanip>
using namespace std;

double simpleInterest(double principal, double year, double rate) {
    return (principal * rate * year) / 100;
}

int main() {
    double principal, years, rate;

    cout << "Enter principal amount: ";
    while(!(cin >> principal) || principal < 0){
        cout << "Invalid Input. Please try again: ";
        cin.clear();
        cin.ignore(100, '\n');
    }

    cout << "Enter rate (percent): ";
    while(!(cin >> rate) || rate < 0){
        cout << "Invalid Input. Please try again: ";
        cin.clear();
        cin.ignore(100, '\n');
    }

    cout << "Enter time (years): ";
    while(!(cin >> years) || years < 0){
        cout << "Invalid Input. Please try again: ";
        cin.clear();
        cin.ignore(100, '\n');
    }

    cout << fixed << setprecision(2);
    cout << "Simple interest: " << simpleInterest(principal, years, rate);

}
