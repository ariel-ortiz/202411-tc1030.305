#include <iostream>
#include "rational.h"

int main()
{
    Rational r(1, 3);
    Rational s(1, 2);
    std::cout << "r = " << r << "\n";
    std::cout << "s = " << s << "\n";
    std::cout << "r + s + r = " << r + s + r << "\n";

    Rational t(3, 9);
    std::cout << "r igual a t: " << (r == t) << "\n";
    std::cout << "r igual a s: " << (r == s) << "\n";
    std::cout << "r no es igual a t: " << (r != t) << "\n";
    std::cout << "r no es igual a s: " << (r != s) << "\n";
    std::cout << "-r = " << -r << "\n";
    std::cout << "s - r = " << s - r << "\n";
    return 0;
}
