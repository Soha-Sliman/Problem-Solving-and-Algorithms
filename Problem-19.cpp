#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	const float pi = 3.14;
	float diameter;

	cout << "please enter a diameter: ";

	cin>> diameter;
	float area = (pi * diameter * diameter) / 4;

	cout << area << endl;

	cout << ceil(area);


	return 0;

}