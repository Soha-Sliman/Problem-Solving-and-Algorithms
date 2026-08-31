#include <iostream>
using namespace std;
int main()
{
	double loanamount, monthlyinstallment;

	cout << "please enter a loanamount, monthlyinstallment: ";
	cin >> loanamount >> monthlyinstallment;

	double totalmonths = loanamount / monthlyinstallment;
	cout << totalmonths << "months ";
	return 0;
}