#include <iostream>
using namespace std;
int main()
{
	double loanamount, howmanymonths;

	cout << "please enter a loanamount , howmanymonths: ";

	cin >> loanamount >> howmanymonths;
	double monthlyinstallment = loanamount / howmanymonths;

	cout << monthlyinstallment;
	return 0;
}