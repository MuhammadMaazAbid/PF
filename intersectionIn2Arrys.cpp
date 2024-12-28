#include <iostream>
using namespace std;
int main() {
	int arr[] = { 4, 5, 2 };
	int arr2[] = { 6, 5, 1 };
	int size = 3;

	for (int i = 0; i < size; i++) {
		//inner loop
		for (int j = 0; j < size; j++) {
			if (arr[i] == arr2[j]) {
				cout << arr[i] << " ";
			}
		}
	}
	return 0;
}