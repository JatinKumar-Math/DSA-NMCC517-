#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int tar) {
    int str = 0, end = size - 1;

    while (str <= end) {
        int mid = (str + end) / 2;

        if (arr[mid] == tar)
            return mid;
        else if (arr[mid] < tar)
            str = mid + 1;
        else
            end = mid - 1;
    }

    return -1;
}

int main() {
    int size;

    cout << "Enter the array size: ";
    cin >> size;
    cout << endl;

    cout << "Enter the elements of the array in sorted order: ";
    int arr[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << endl;

    int tar;
    cout << "Enter the number you want to search in the array: ";
    cin >> tar;

    int position = binarySearch(arr, size, tar);

    if (position != -1)
        cout << "Element found at index: " << position << endl;
    else
        cout << "Element not found in array" << endl;

    return 0;
}
