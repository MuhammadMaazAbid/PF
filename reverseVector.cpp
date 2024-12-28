#include <iostream>
#include <vector>
using namespace std;

void reverseVector(vector <int> &vect , int size) {
	int start = 0 ,end = size - 1 , temp = 0;
	while (end > start) {
		swap(vect[start], vect[end]);
		start++; end--;
	}
}
int main() {
	vector<int> nums = { 1, 2, 3, 4, 5 };
	int size = 5;
	reverseVector(nums, size);
	for (int vect : nums) {
		cout << vect << " ";
	}
	return 0;
}