
#include <iostream>
using namespace std;

int main()
{

	int N = 20;
	cout << "Printing the febionacci series till N " << endl;
	int num1 = 0, num2 = 1, next = 0;
	for (int i = 0; i <= N; i++) {

		//using conditions to print the base 0 1 
		if (i == 0)
		{
			cout << "0 ";
		}
		else if (i == 1)
		{
			cout << " 1 ";
		}

		// a series of numbers in which each number ( Fibonacci number ) is the sum of the two preceding numbers.
		// we take 'next' as the variabel to store the sum of 'num1' that is 0 and 'num2' that is 1   
		next = num1 + num2;
		// assigning num2 to num1 
		num1 = num2;
		// assigning num2 to next
		num2 = next;
		// printting the series with a moderate gap to make it look appropriate
		cout << next << " ";
	}
	return 0;
}