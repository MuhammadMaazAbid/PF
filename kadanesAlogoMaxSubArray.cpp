#include<iostream>
using namespace std;
int main() {
	int arr[] = { 3, -4, 5, 4, -1, 7, -8 };
	int size = 7, maxS = INT_MIN, currentSum = 0;
	// Kadane's Algorithm
	for (int i = 0; i < size; i++) {
		currentSum += arr[i];
		maxS = max(currentSum, maxS);
		if (currentSum < 0) {
			currentSum = 0;
		}
	}

	cout << maxS;

	return 0;
}


// simple approach
/*for (int start = 0; start < size; start++) {
	int currentSum = 0;
	for (int end = start; end < size; end++) {
		currentSum += arr[end];
		maxS = max(currentSum, maxS);
	}
}*/