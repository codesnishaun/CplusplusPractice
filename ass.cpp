#include <iostream>
#include <string>
using namespace std;


int searchElement(string arr[], string search){
    for(int i = 0; i < 5; ++i) {
        if(arr[i] == search) return i;
    }
    return -1;
}

int main(){
    string arr[5];
    int choice;
    string search;

    cout << "Enter 5 words: ";
    for(int i = 0; i < 5; ++i){
        cin >> arr[i];
    }

    do{
        cout << "Choose one\n";
        cout << "1-Search\n";
        cout << "2-Replace\n";
        cout << "3-Display Array\n";
        cout << "4-Exit\n";
        cout << "Enter choice: ";
        while(!(cin >> choice)){
            cout << "Invalid Input. Please enter a number: ";
            cin.clear();
            cin.ignore(100, '\n');
        }
    
        switch(choice){
            case 1: {
                cout << "Enter a word you want to search: ";
                cin >> search;
                int index = searchElement(arr, search);
                if(index != -1){
                    cout << search << " found in index " << index << '\n';
                    break;
                }
                cout << search << " is not in the array\n";
                break;
            }
            case 2: {
                cout << "Enter a word to replace: ";
                cin >> search;
                int index = searchElement(arr, search);
                if(index != -1){
                    string replacement;
                    cout << "Enter a word to replace " << search << ": ";
                    cin >> replacement;
                    arr[index] = replacement;
                    cout << search << " replaced by " << replacement << '\n';
                    break;
                }
                cout << search << " is not in the array\n";
                break;
            }
            case 3:
                cout << "Array elements: ";
                for(int i = 0; i < 5; ++i) {
                    cout << arr[i] << ' ';
                }
                cout << '\n';
                break;
            case 4:
                cout << "Thank you\n";
                break;
            
            default:
                cout << "Invalid\n";
                break;
        }
    } while(choice != 4);
}

// love hope care health wealth
