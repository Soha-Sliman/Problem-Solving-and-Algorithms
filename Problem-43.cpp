#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int Totalseconds;
	cin >> Totalseconds;

	int secondsperday = 24 * 60 * 60;
	int secondsperhour = 60 * 60;
	int secondsperminute = 60;

	int numberofdays = floor(Totalseconds / secondsperday);
	int Remainder = Totalseconds % secondsperday;

	int numberofhours = floor(Remainder / secondsperhour);
	Remainder = Remainder % secondsperhour;

	int numberofminutes = floor(Remainder / secondsperminute);
	Remainder = Remainder % secondsperminute;

	int numberofseconds = Remainder;
	cout << numberofdays <<":" <<numberofhours <<":" <<numberofminutes<< ":"<< numberofseconds;
	return 0;
}