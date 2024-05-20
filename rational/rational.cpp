#include "rational.h"

Rational::Rational(int numerator, int denominator)
{
    _numerator = numerator;
    _denominator = denominator;
}

std::string Rational::to_string()
{
    return std::to_string(_numerator)
        + "/"
        + std::to_string(_denominator);
}
