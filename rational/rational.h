#pragma once

#include <string>

class Rational {

public:
    Rational(int numerator, int denominator);
    std::string to_string();

private:
    int _numerator;
    int _denominator;
};
