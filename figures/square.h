#pragma once

#include "rectangle.h"

class Square : public Rectangle {
public:
    Square(double side) : Rectangle(side, side) {}
};

