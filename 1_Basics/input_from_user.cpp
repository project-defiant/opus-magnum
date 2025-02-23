/* 
 * Programme to calculate the height in feet to height in meters 
 * The aim is to understand how the keyboard input works
 */
 
#include <iostream>
using namespace std;

int main()
{
	int feet;
	double meters;
	double factor = 0.3;

	cout << "Give height in feet(s): ";
	cin >> feet;

	meters = feet * factor;

	cout << "\n" <<  feet << " feet is " << meters << " meters\n";

	return 0;
}
