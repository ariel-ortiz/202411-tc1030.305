#include "rectangle.h"

Rectangle::Rectangle(double length, double width)
{
    _length = length;
    _width = width;
}

double Rectangle::area()
{
    return _length * _width;
}

double Rectangle::perimeter()
{
    return 2 * (_length + _width);
}
