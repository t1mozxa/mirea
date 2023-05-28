#include <iostream>
#include "circle.h"

using namespace std;

int main()
{

	circle A(0, 0, 0);
	circle B(0, 0, 0);
	circle C(0, 0, 0);

	float a1, a2, a3;

	cout << "x, y and rad A\n";
	cin >> a1 >> a2 >> a3;
	A.set_circle(a1, a2, a3);

	cout << "x, y and rad B\n";
	cin >> a1 >> a2 >> a3;
	B.set_circle(a1, a2, a3);

	cout << "x, y and rad C\n";
	cin >> a1 >> a2 >> a3;
	C.set_circle(a1, a2, a3);

	cout << "\n";

	cout << "square A - " << A.square() << "";
	cout << "square B - " << B.square() << "";
	cout << "square C - " << C.square() << "";

	float R, X, Y;

	A.get_circle(R, X, Y);
	if (B.check_circle(R, X, Y)) cout << "Circle A and B intersect\n";
	else cout << "Circle A and B не intersect\n";

	B.get_circle(R, X, Y);
	if (C.check_circle(R, X, Y)) cout << "Circle B and C intersect\n";
	else cout << "Circle B and C not intersect\n";

	C.get_circle(R, X, Y);
	if (A.check_circle(R, X, Y)) cout << "Circle A and C intersect\n";
	else cout << "CircleA and C не intersect\n";

	float a, b, c;

	cout << "Enter a triangle (a,b,c)\n";
	cin >> a >> b >> c;

	if (A.triangle_around(a, b, c)) cout << "Circle A can enter a triangle\n";
	else cout << "Circle A impossible to fit a triangle\n";

	if (B.triangle_around(a, b, c)) cout << "Circle B can enter a triangle\n";
	else cout << "Circle B impossible to fit a triangle\n";

	if (C.triangle_around(a, b, c)) cout << "Circle C can enter a triangle\n";
	else cout << "Circle C impossible to fit a triangle\n";

	if (A.triangle_in(a, b, c)) cout << "В Circle A can enter a triangle\n";
	else cout << "В Circle A impossible to fit a triangle\n";

	if (B.triangle_in(a, b, c)) cout << "В Circle B can enter a triangle\n";
	else cout << "В Circle B impossible to fit a triangle\n";

	if (C.triangle_in(a, b, c)) cout << "В Circle C can enter a triangle\n";
	else cout << "В Circle C impossible to fit a triangle\n";

	return 0;
}