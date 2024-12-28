#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main() {
	int MAX_LINES = 5;
	string array[5];
	ifstream inputFile("housing.txt");
	if (!inputFile) {
		cout << "Unable to open file." << endl;
		return 1;
	}
	int lines = 0;
	while (!inputFile.eof()) {
		getline(inputFile, array[lines]);
	}
	for (int i = 0; i < 5; i++) {
		cout << array[i] << " ";
	}
	return 0;
}