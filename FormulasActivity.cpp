#include <iostream>
using namespace std;
int main()
{
	int i = 2, sum = 0;


	while (i <= 30) {

		if (i % 2 == 0) {
			sum = sum + i;
			i++;
		}
		else {
			i++;
		}

	}
	cout << "Sum of all positive even integers from 2 to 30 is :" << sum << endl;


	return 0;
}

