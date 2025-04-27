#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double area(double radius){
    return M_PI * pow(radius, 2); 
}

int main() {
    double radius;

    cout << "Enter circle radius: ";
    while(!(cin >> radius) || radius < 0) {
        cout << "Invalid input. Please try again: ";
        cin.clear();
        cin.ignore(100, '\n');
    }
    cout << fixed << setprecision(2);
    cout << "Area of circle with radius " << radius << " is: " << area(radius) << endl;
}

