#ifndef Triangle_H
#define Triangle_H


class Triangle {
private:
    double side1, side2, side3;

public:
    Triangle(double a, double b, double c);

    bool is_valid();

    double perimeter();

    double square();

};


#endif