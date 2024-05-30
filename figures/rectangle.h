#pragma once

#include "figure.h"

class Rectangle : public Figure {
public:
    Rectangle(double length, double width);
    double area() override;
    double perimeter() override;
private:
    double _length;
    double _width;
};
