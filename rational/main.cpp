#include <iostream>
#include "rational.h"

int main()
{
    Rational a(1, 2);
    Rational b(1, 4);

    std::cout << "a = " << a.to_string() << "\n";
    std::cout << "b = " << b.to_string() << "\n";
    return 0;
}
