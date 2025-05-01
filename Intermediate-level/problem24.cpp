#include <iostream>
#include <string>
using namespace std;

string reverseString(string input) {
    string reverse;
    for(int i = input.length() - 1; i >= 0; --i) {
        reverse.append(1, input[i]);
    }
    return reverse;
}

int main() {
    string input;

    cout << "Enter a string to reverse: ";
    getline(cin >> ws, input);

    cout << "Reversed string: " << reverseString(input) << '\n';
}
