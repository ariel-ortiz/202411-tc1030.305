#include "rational.h"

int gcd(int a, int b)
{
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

Rational::Rational(int numerator, int denominator)
{
    int sign;
    if (numerator * denominator < 0) {
        sign = -1;
    } else {
        sign = 1;
    }
    numerator = abs(numerator);
    denominator = abs(denominator);

    int factor = gcd(numerator, denominator);
    _numerator = (numerator / factor) * sign;
    _denominator = denominator / factor;
}

std::string Rational::to_string() const
{
    if (_denominator == 1) {
        return std::to_string(_numerator);
    }
    return std::to_string(_numerator)
        + "/"
        + std::to_string(_denominator);
}

Rational Rational::operator+(const Rational& other) const
{
    int new_numerator = this->_numerator * other._denominator
        + this->_denominator * other._numerator;
    int new_denominator = this->_denominator * other._denominator;
    return Rational(new_numerator, new_denominator);
}

std::ostream& operator<<(std::ostream& os, const Rational& r)
{
    return os << r.to_string();
}
