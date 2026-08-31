#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	const float pi = 3.14;
	float rib;

	cout << "please enter a rib:\n ";

	cin >> rib;
	float area = (pi * (rib * rib)) / 4;

	cout<< area << endl;

	cout << ceil(area);


	return 0;

}