#include <iostream>
using namespace std;

void swap(int &min, int &max) {
	int temp;
	temp = min;
	min = max;
	max = temp;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int size = 5;
	int minimum = INT_MAX;
	int maximum = INT_MIN;

	for (int i = 0; i < size; i++) {
		if (arr[i] < minimum) {
			minimum = arr[i] ;
		}
		if (arr[i] > maximum) {
			maximum = arr[i];
		}
	}
	cout << minimum << endl;
	cout << maximum << endl;
	swap(minimum, maximum);
	cout << minimum << endl;
	cout << maximum << endl;






	return 0;
}

