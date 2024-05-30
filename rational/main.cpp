#include <iostream>
#include <stdexcept>
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

    std::cout << "r convertido a double: " << static_cast<double>(r) << "\n";
    std::cout << "s convertido a double: " << static_cast<double>(s) << "\n";
    std::cout << "t convertido a double: " << static_cast<double>(t) << "\n";

    try {
        Rational u(4, 0);
        std::cout << "u = " << u << "\n";
    } catch (std::invalid_argument e) {
        std::cout << "Error detected: " << e.what() << "\n";
    }

    std::cout << "Fin de programa\n";
    return 0;
}
