#include<iostream>
using namespace std;
int main()
{
	float mark1, mark2, mark3;

	cout << "please enter a marks:\n ";

	cin >> mark1 >> mark2 >> mark3;
	double avg = (mark1 + mark2 + mark3) / 3;

	cout << avg;


	return 0;

}