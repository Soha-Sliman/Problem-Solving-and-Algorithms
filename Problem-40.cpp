#include<iostream>
using namespace std;

int main()
{
	double billvalue;
	cout << "please enter a billvalue: ";

	cin >> billvalue;

	double totalbill = billvalue * 1.1;
	 totalbill = totalbill * 1.16;

	cout << totalbill;
	return 0;
}