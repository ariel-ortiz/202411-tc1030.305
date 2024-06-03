#include <iostream>
#include "figure.h"
#include "rectangle.h"
#include "circle.h"
#include "square.h"

int main() {
    Figure *f;
    Circle c(2.0);
    f = &c;
    std::cout << c.area() << "\n";
    std::cout << f->area() << "\n";
    Rectangle r(3.0, 6.0);
    std::cout << r.area() << "\n";
    f = &r;
    std::cout << f->area() << "\n";
    Square s(3.0);
    std::cout << s << "\n";
    f = &s;
    std::cout << f->area() << "\n";
    return 0;
}
