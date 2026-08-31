#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float num, a, b, c;

	cout << "please enter a num:\n ";

	cin >> num;
	a = num * num;
    b = num * num * num;
    c = num * num * num * num;

	cout << a << " , " << b << " , " << c << endl;

	cout << round(a) << " , " << round(b) << " , " << round(c);


	return 0;
}
