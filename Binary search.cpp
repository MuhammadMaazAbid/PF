#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2; 
        if (arr[mid] == key) {
            return mid; 
        }
        else if (arr[mid] < key) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1; 
}

int main() {
    int arr[] = { 5, 7, 23, 32, 34, 62 }; 
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    cout << "Enter the element to search: ";
    cin >> key;

    int result = binarySearch(arr, size, key);
    if (result != -1) {
        cout << "Element " << key << " found at index " << result << endl;
    }
    else {
        cout << "Element " << key << " not found." << endl;
    }

    return 0;
}
