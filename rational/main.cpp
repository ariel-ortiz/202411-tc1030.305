#include <iostream>
#include "rational.h"

int main()
{
    Rational a(1, 2);
    Rational b(1, 3);
    Rational c;

    c = a + b;

    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";
    std::cout << "c = " << c << "\n";
    return 0;
}
