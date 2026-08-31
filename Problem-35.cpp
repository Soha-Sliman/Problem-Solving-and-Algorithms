#include<iostream>
using namespace std;
int main()
{
	int pennies, nickels, dimes, quarters, dollars;

	cin >> pennies >> nickels >> dimes >> quarters >> dollars;

	int totalpennies = pennies * 1 + nickels * 5 + dimes * 10 + quarters * 25 + dollars * 100;
	double totaldollars = (double)totalpennies / 100;

	cout << totalpennies << " " << totaldollars;


	return 0;
}