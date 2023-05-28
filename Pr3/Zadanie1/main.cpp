#include <iostream>
#include "eq2.h"

using namespace std;

int main()
{
	eq2 q1(2, -53, 12);
	eq2 q2(-3, -35, 14);
	eq2 q3;

	q3 = q1 + q2;

	cout << "1 equation" << q1.find_X() << "\n";
	cout << "2 equation" << q2.find_X() << "\n";
	cout << "3 equation" << q3.find_X() << "\n";

	double E;
	cout << "cout X";
	cin >> E;

	cout << "the first equation for x" << E << q1.find_Y(E) << "\n";
	cout << "the second equation for x" << E  << q2.find_Y(E) << "\n";
	cout << "the third equation for x" << E << q3.find_Y(E) << "\n";

	return 0;
}