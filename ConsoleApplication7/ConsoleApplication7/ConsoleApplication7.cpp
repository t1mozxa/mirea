#include <iostream>
#include <cmath>
#include "Type2.h"
using namespace std;

class type2 {
private:
    double A;
public:
    type2(double a1) {
        A = a1;
    }
    void Get_answer() {
        cout << "Ответом является Х = 0" << endl;
    }
    void show() {
        cout << "Уравнение " << A << "*x^2 = 0" << endl;
    }
};

int main()
{
    return 0;
};

