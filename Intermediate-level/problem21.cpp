#include <iostream>
using namespace std;

int getValidInput(){
    int num;
    while(true) {
        cin >> num;
        if(cin.fail()){
            cout << "Invalid Input. Please try again: ";
            cin.clear();
            cin.ignore(100, '\n');
        }
        else break;
    }
    return num;
} 

int findMaximumNumber(int arr[], int size){
    int max = arr[0];
    for(int i = 0; i < size; ++i){
        if(arr[i] > max) max = arr[i];
    }
    return max;
}

int main() {
    int size;
    
    cout << "Enter how many number to input: ";
    size = getValidInput();

    int arr[size];
    cout << "Enter " << size << " numbers: ";
    for(int i = 0; i < size; ++i) {
        arr[i] = getValidInput();
    }

    cout << "The maximum number is: " << findMaximumNumber(arr, size);
}
