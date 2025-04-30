#include <iostream>
using namespace std;

int getValidInput(){
    int num;
    while(!(cin >> num) || num < 0) {
        cout << "Invalid Input. Please Enter Positive Integer: ";
        cin.clear();
        cin.ignore(100, '\n');
    }
    return num;
}

int searchElement(int arr[], int size, int search){
    for(int i = 0; i < size; ++i){
        if(arr[i] == search) return i;
    }
    return -1;
}

int main() {
    int size;

    cout << "Enter number of element: " ;
    size = getValidInput();

    int arr[size];
    cout << "Enter " << size << " elements: ";
    for(int i = 0; i < size; ++i) {
        arr[i] = getValidInput();
    }

    int search;
    cout << "Enter number to search: ";
    search = getValidInput();
    
    int index = searchElement(arr, size, search);
    if(index != -1){
        cout << search << " found at index " << index << '\n';
        return 0;
    }
    cout << search << " not found in the array.\n";
}
