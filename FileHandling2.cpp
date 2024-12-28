#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inputFile("data.txt");  // Open the file
    string name;

    // Check if the file was opened successfully
    if (!inputFile) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    // Read 5 names from the file
    for (int i = 0; i < 5; i++) {
        if (getline(inputFile, name)) {  // Read each line (name) from the file
            cout << name << endl;  // Print each name
        }
        else {
            cout << "Less than 5 names in the file." << endl;
            break;
        }
    }

    inputFile.close();  // Close the file
    return 0;
}
