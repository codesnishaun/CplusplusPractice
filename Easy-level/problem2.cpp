#include <iostream>
using namespace std;

int main() {
    int age;
    string name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your full name: ";
    getline(cin >> ws, name);

    cout << "You're " << name << " and you're " << age << " years old\n";
}
