#include "iostream"
#include "Triangle.h"
using namespace std;

int main() {
    double a, b, c;

    Triangle triangles[3] = { Triangle(0, 0, 0), Triangle(0, 0, 0), Triangle(0, 0, 0) };

    for (int i = 0; i < 3; i++) {
        cout << "Стороны треугольнка: " << i + 1 << ": ";
        cin >> a >> b >> c;

        Triangle t(a, b, c);

        if (t.is_valid()) {
            triangles[i] = t;
        }
        else {
            cout << "0" << endl;
            i--;
        }
    }

    for (int i = 0; i < 3; i++) {
        cout << "Triangle " << i + 1 << ":" << endl;
        cout << "Perimeter: " << triangles[i].perimeter() << endl;
        cout << "Area: " << triangles[i].square() << endl;
    }

    return 0;
}