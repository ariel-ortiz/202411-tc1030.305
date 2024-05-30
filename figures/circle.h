#pragma once

#include <string>
#include "figure.h"

class Circle : public Figure {
public:
    Circle(double radio);
    double area() override;
    double perimeter() override;
    std::string to_string() override;
private:
    double _radius;
};
