#include <cmath>
#include "circle.h"

Circle::Circle(double radius)
{
    _radius = radius;
}

double Circle::area()
{
    return M_PI * _radius * _radius;
}

double Circle::perimeter()
{
    return 2 * M_PI * _radius;
}

std::string Circle::to_string()
{
    return "I'm a circle. " + Figure::to_string();
}
