#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = { 34, 7, 23, 32, 5, 62 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    cout << "Enter the element to search: ";
    cin >> key;

    int result = linearSearch(arr, size, key);
    if (result != -1) {
        cout << "Element " << key << " found at index " << result << endl;
    }
    else {
        cout << "Element " << key << " not found." << endl;
    }

    return 0;
}
