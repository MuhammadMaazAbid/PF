#include<iostream>
#include<vector>
using namespace std;
int uniqueNumber(vector <int>& vect) {
	int ans = 0;
	for (int i : vect) {
		ans = ans ^ i;
	}
	return ans;
}
int main() {
	vector<int> vect = { 4, 1, 1};

	cout << uniqueNumber(vect);
	
	return 0;
}