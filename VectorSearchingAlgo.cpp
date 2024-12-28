#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
void vect(vector<int>& arr) {
	int i, j, temp;
	for (i = 0; i < arr.size(); i++) {
		
		for (j = 0; j < arr.size()-1-i; j++) {
			if (arr[j] > arr[i]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int vect : arr) {
		cout << vect << " ";
	}
}
int main() {
	vector<int> arr;
	int value;
	ifstream inputFile("vectors.txt");
	while (inputFile >> value) {
		arr.push_back(value);
	}
	inputFile.close();
	vect(arr);
	//vect(arr);
		return 0;
	}