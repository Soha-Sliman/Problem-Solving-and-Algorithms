#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	const float pi = 3.14;
	float l;

	cout << "please enter a l:\n ";

	cin >> l;

	float area = (l * l) / (4 * pi);

	cout << area << endl;

	cout << floor(area);


	return 0;
}