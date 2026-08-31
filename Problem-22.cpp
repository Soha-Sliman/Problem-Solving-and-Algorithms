#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	const float pi = 3.14;
	float a, b;

	cout << "please enter a,b: ";

	cin >> a >> b;
	float area = (pi * b * b / 4) * ((2 * a - b) / (2 * a + b));

	cout << area << endl;

	cout << floor(area);


	return 0;
}