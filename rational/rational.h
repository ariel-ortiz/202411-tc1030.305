#pragma once

#include <iostream>
#include <string>

class Rational {

public:
    Rational(int numerator=0, int denominator=1);
    std::string to_string() const;
    Rational operator+(const Rational& other) const;
    bool operator==(const Rational& other) const;
    bool operator!=(const Rational& other) const;
    Rational operator-() const;
    Rational operator-(const Rational& other) const;
    operator double() const;

private:
    int _numerator;
    int _denominator;
};

std::ostream& operator<<(std::ostream& os, const Rational& r);
