#pragma once

#include <string>
#include "rectangle.h"

class Square : public Rectangle {
public:
    Square(double side) : Rectangle(side, side) {}
    std::string to_string() override;
    void make_pants();
};
