#include <iostream>
#include <vector>
#include "figure.h"
#include "rectangle.h"
#include "circle.h"
#include "square.h"

void do_something(Figure& fig)
{
    std::cout << "***** Doing something...\n";
    std::cout << fig << "\n";
    std::cout << fig.area() << "\n";
    std::cout << fig.perimeter() << "\n";
    std::cout << fig.to_string() << "\n";
    Square* square_pointer = dynamic_cast<Square*>(&fig);
    if (square_pointer) {
        square_pointer->make_pants();
    }

}

int main() {
    Circle c(2.0);
    Rectangle r(3.0, 6.0);
    Square s(3.0);

    std::vector<Figure*> vec = {&c, &r, &s, &c};

    for (Figure* p : vec) {
        std::cout << *p << "\n";
        std::cout << p->area() << "\n";
        Square* square_pointer = dynamic_cast<Square*>(p);
        if (square_pointer) {
            square_pointer->make_pants();
        }
    }

    // Circle* p1 = &c;
    // Square* p2 = dynamic_cast<Square*>(p1);
    // std::cout << p2->make_pants() << "\n";

    do_something(s);
    do_something(c);

    return 0;
}
