#include<iostream>
using namespace std;
int main()
{
	int num1, num2;

	cout << "please enter a numbers:\n ";

	cin >> num1 >> num2;
	cout << num1 << "\n " << num2<<"\n ";

	int temp = num1;
	num1 = num2;
	num2 = temp;


	cout << num1 << "\n " << num2;


	return 0;
}