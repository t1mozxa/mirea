#include "Triangle.h"
#include "cmath"

Triangle::Triangle(double a, double b, double c) {
    side1 = a;
    side2 = b;
    side3 = c;
}

bool Triangle::is_valid() {
    return ((side1 + side2 > side3) && (side2 + side3 > side1) && (side1 + side3 > side2));
}

double Triangle::perimeter() {
    return side1 + side2 + side3;
}

double Triangle::square() {
    double p = (side1 + side2 + side3) / 2;
    return sqrt(p * (p - side1) * (p - side2) * (p - side3));
}