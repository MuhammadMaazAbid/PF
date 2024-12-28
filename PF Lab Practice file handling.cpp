#include<fstream>
#include <iostream>
using namespace std;

void sort(int arr[]) {

	int temp, i, j;
	for (i = 0; i < 10; i++) {
		for (j = i + 1; j < 10; j++) {
			if (arr[j] < arr[i]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout << endl;
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}

}

int main() {
	const int max = 10;
	int arr[max];
	int count = 0, temp, i, j;
	//opening the file in read mode
	ifstream inputFile("array.txt");
	while (inputFile >> arr[count]) {
		//display the data as it is read
		cout << arr[count] << " ";
		count++;
		}
	inputFile.close();
	//int ArrayLength = sizeof(a) / sizeof(a[0])
	sort(arr);
	cout << endl; 
	


	return 0;
}