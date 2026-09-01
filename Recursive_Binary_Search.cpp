#include <iostream>
using namespace std;

int binarySearch(int arr[], int str, int end, int tar) {
    if (str > end)
        return -1;

    int mid = (str + end) / 2;

    if (arr[mid] == tar)
        return mid;
    else if (arr[mid] < tar)
        return binarySearch(arr, mid + 1, end, tar);
    else
        return binarySearch(arr, str, mid - 1, tar);
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

    int position = binarySearch(arr, 0, size - 1, tar);

    if (position != -1)
        cout << "Element found at index: " << position << endl;
    else
        cout << "Element not found in array" << endl;

    return 0;
}
