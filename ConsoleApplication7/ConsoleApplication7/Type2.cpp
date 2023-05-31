#include "Type2.h"

type2::type2(double a1) {
    setlocale(LC_ALL, "Russian");
    A = a1;
}

void type2::Get_answer() {
    std::cout << "Ответом является Х = 0" << std::endl;
}

void type2::show() {
    std::cout << "Уравнение " << A << "*x^2 = 0" << std::endl;
}
