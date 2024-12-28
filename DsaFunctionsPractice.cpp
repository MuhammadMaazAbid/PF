

#include <iostream>
using namespace std;

/* int SumOfDigits(int n) {
	int sum = 0;
	while (n > 0) {
		int LD = n % 10;
		n = n / 10;
		sum = sum + LD;
	}
	return sum;
}

int FactorialN(int n) {
	int fact = 1;
	for (int i = 1; i <= n; i++) {
		fact *= i;
	}
		return fact;
	}
int nCr(int n, int r) {
	int fact_n = FactorialN(n);
	int fact_r = FactorialN(r);
	int fact_nmr = FactorialN(n - r);
	int result = fact_n /( fact_r * (fact_nmr));
	return result;
}

void CheckPrime(int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			break;
		}
		else {
			cout << n << " is a Prime number" << endl;
		}
	}
}

int Sum(int n) {
	for (int i = 2; i <=n; i++) {
		CheckPrime(i);
	}
	return n;
}
*/
 
int main()
{
	int n = 10, num;
	for (int i = 2; i <= n; i++) {
		if (n % i == 0) {
			num = false;
		}
		else {
			num = true;
		}
	}
	if (num == true) {
		cout << i << " Is Prime";
	}
	else {
		cout << n << " Is not Prime";
	}


	
   return 0;
}

