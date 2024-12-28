#include <vector>
#include <iostream>
using namespace std;
int main() {

	vector <int> vec = {1, 2, 3};
	cout << vec[0] << endl;
	vector <int> vect(3, 0);
	for (int i : vect) {
		cout << i << endl;
	}


	return 0;
}
