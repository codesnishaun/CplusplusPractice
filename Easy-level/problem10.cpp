#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int header, column;

    cout << "Multiplication table generator.\n";
    cout << "Enter a header number: ";
    while(!(cin >> header) || header < 0){
        cout << "Invalid input, try again: ";
        cin.clear();
        cin.ignore(100, '\n');
    }
    cout << "Enter a number for column: ";
    while(!(cin >> column) || column < 0){
        cout << "Invalid input, try again: ";
        cin.clear();
        cin.ignore(100, '\n');
    }

    for(int i = 1; i <= column; ++i){
        for(int j = 1; j <= header; ++j){
            cout << right << setw(5) << i * j;
        }
        cout << endl;
    }
}
