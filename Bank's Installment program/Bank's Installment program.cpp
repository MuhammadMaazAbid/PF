#include <iostream>
using namespace std;
int main()
{
	float vehiclePrice, downPayment, installmentMonths, payAbleAmount,  new_payAbleAmount, mothlyInstallment;
	double interestRate;
	char choice;
	do {
		cout << "Enter the Vehicle price in Rs : ";
		cin >> vehiclePrice;
		cout << "Enter the down payment in Rs : ";
		cin >> downPayment;
		cout << "For how many months you want to lease the car ? : ";
		cin >> installmentMonths;
		payAbleAmount = vehiclePrice - downPayment;
		if (installmentMonths <= 12) {
			interestRate = 0.10;
			new_payAbleAmount = payAbleAmount + (payAbleAmount + interestRate);
			mothlyInstallment = new_payAbleAmount / installmentMonths;
		}
		else if (installmentMonths >= 12 && installmentMonths <=24) {
			interestRate = 0.15;
			new_payAbleAmount = payAbleAmount + (payAbleAmount + interestRate);
			mothlyInstallment = new_payAbleAmount / installmentMonths;
		}
		else if (installmentMonths >= 24 && installmentMonths <= 36) {
			interestRate = 0.20;
			new_payAbleAmount = payAbleAmount + (payAbleAmount + interestRate);
			mothlyInstallment = new_payAbleAmount / installmentMonths;
		}
		else if (installmentMonths >= 36 && installmentMonths <= 48) {
			interestRate = 0.25;
			new_payAbleAmount = payAbleAmount + (payAbleAmount + interestRate);
			mothlyInstallment = new_payAbleAmount / installmentMonths;
		}
		else if (installmentMonths >= 48 && installmentMonths <= 60) {
			interestRate = 0.30;
			new_payAbleAmount = payAbleAmount + (payAbleAmount + interestRate);
			mothlyInstallment = new_payAbleAmount / installmentMonths;
		}
		else {
			cout << "We do not give installments upto 60 months" << endl;
		}
		cout << "Your monthly installment is : Rs." << mothlyInstallment << endl;
		cout << "Do you want to continue this program (y/n) ";
		cin >> choice;
	} while (choice == 'y' || choice == 'Y');
	cout << "Thank you for using our Program" << endl;







	return 0;
}

