#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int search) {
    int position = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] == search) {
            position = i;
            break;
        }
    }
    return position;
}

int main() {
    int size;
    cout << "Enter the array size: ";
    cin >> size;
    cout << endl;
    
    cout << "Enter the elements of the array: ";
    int marks[size];
    for (int i = 0; i < size; i++) {
        cin >> marks[i];
    }
    cout << endl;
    
    int search;
    cout << "Enter the number you want to search in the array: ";
    cin >> search;
    
    int position = linearSearch(marks, size, search);
    
    if (position != -1)
        cout << "Element found at index: " << position << endl;
    else
        cout << "Element not found in array" << endl;

    return 0;
}