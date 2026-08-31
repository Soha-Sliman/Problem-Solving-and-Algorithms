#include<iostream>
using namespace std;

int main()
{
	double totalbill, cashpaid;

	cout << "please enter a totalbill and cashpaid: ";

	cin >> totalbill >> cashpaid;
	double remainder = cashpaid - totalbill;

	cout << remainder;


	return 0;
}