#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float numofdays, numofhours, numofminutes, numofseconds;

	cout << "please enter a numofdays, numofhours, numofminutes, numofseconds: ";

	cin >> numofdays >> numofhours >> numofminutes >> numofseconds;
	float totalseconds = (numofdays * 24 * 60 * 60) + (numofhours * 60 * 60) + (numofminutes * 60) + numofseconds;

	cout << totalseconds<< endl;

	cout << round(totalseconds);


	return 0;
}