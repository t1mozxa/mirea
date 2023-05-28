#include "circle.h"
#include <math.h>
using namespace std;
float radius;
float x_cent;
float y_cent;

float const PI = 3.1415926535;

void get_circle(float& R, float& X, float& Y)
{
	R = radius;
	X = x_cent;
	Y = y_cent;
};
void set_circle(float r, float x, float y)
{
	radius = r;
	x_cent = x;
	y_cent = y;
};
float square()
{
	return PI * radius * radius;
}
bool triangle_around(float a, float b, float c)
{
	double p = (a + b + c) / 2;
	double S = sqrt(p * (p - a) * (p - b) * (p - c));
	return (radius >= ((a + b + c) / (4 * S)));
}
bool triangle_in(float a, float b, float c)
{
	double p = (a + b + c) / 2;
	double S = sqrt(p * (p - a) * (p - b) * (p - c));
	return (radius <= S / p);
}
bool check_circle(float r, float x_cntr, float y_cntr)
{
	float dist = sqrt(pow((x_cntr - x_cent), 2) + pow((y_cntr - y_cent), 2));
	return (radius + r <= dist);
}