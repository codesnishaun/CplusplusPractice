#include <iostream>
using namespace std;

int getValidInput() {
    int num;
    while(!(cin >> num)) {
        cout << "Invalid Input. Please try again: ";
        cin.clear();
        cin.ignore(100, '\n');
    }
    return num;
}

void sorted(int* arr, int size){
    for(int i = 0; i < size; ++i){
        for(int j = i + 1; j < size; ++j){
            if(arr[i] < arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main() {
    int size;
    cout << "Enter number of elements: ";
    size = getValidInput();

    int* arr = new int[size];
    cout << "Enter " << size << " elements: ";
    for(int i = 0; i < size; ++i) {
        arr[i] = getValidInput();
    }

    sorted(arr, size);
    cout << "Sorted array: ";
    for(int i = 0; i < size; ++i){
        cout << arr[i] << ' ';
    }

    delete[] arr;
}
