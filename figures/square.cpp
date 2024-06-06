#include <iostream>
#include "square.h"

std::string Square::to_string()
{
    return "I'm a square. " + Figure::to_string();
}

void Square::make_pants()
{
    std::cout << "Making pants for Sponge Bob\n";
}
