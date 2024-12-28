#include <iostream>
using namespace std;

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int size = 5;
	int sum = 0;
	int product = 1;

	for (int i = 0; i < size; i++) {
		sum = sum + arr[i];
		product = product * arr[i];
	}
	cout << sum << endl;
	cout << product << endl;





	return 0;
}

