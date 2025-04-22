#include <iostream>
#include <limits>
using namespace std;

int main() {
    int sequence;

    cout << "Enter a number for sequence: ";
    while(!(cin >> sequence) || sequence <= 2){
        cout << "Invalid Input: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int term1 = 0, term2 = 1, term3;
    for(int i = 0; i < sequence; ++i){
        if(i == 0){
            cout << term1 << ", ";
            continue;
        }
        if(i == 1){
            cout << term2;
            continue;
        }
        term3 = term1 + term2;
        term1 = term2;
        term2 = term3;

        cout << ", " <<term3;
    }
}
