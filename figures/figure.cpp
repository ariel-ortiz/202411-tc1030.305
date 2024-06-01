#include <string>
#include "figure.h"

std::string Figure::to_string()
{
    return "My area is: "
        + std::to_string(area())
        + ", my perimeter is: "
        + std::to_string(perimeter());
}

std::ostream& operator<<(std::ostream& os, Figure& figure)
{
    os << figure.to_string();
    return os;
}
