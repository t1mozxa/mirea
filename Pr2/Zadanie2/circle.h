#include <iostream>
using namespace std;
class circle
{
private:
	float radius;
	float x_cent;
	float y_cent;

	float const PI = 3.1415926535;

public:
	circle(float r, float x, float y)
	{
		radius = r;
		x_cent = x;
		y_cent = y;
	};

	void get_circle(float& RT, float& XT, float& YT)
	{
		RT = radius;
		XT = x_cent;
		YT = y_cent;
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


};