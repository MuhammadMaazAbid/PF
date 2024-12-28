#include <iostream>
using namespace std;
int main()
{
	int arr[] = { 8, 2, 3, 8 , 1 , 12 , 3 };
	int size = 7;
	int count ;

	for (int i = 0; i < size; i++) {
		count = 0;
		for (int j = 0; j < size; j++) {
			if (arr[i] == arr[j]) {
				count++;
			}
		}
		if (count == 1) {
			cout << arr[i] << " ";
		}
	}


	return 0;
}

