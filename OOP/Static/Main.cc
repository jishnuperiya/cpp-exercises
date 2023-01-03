#include <iostream>
#include <string>

#include "Circle.h"


int main()
{
    auto c1 = Circle{2.0F};

    std::cout << c1.compute_area() << '\n';

    // since the get_pi() is a static function, it can be accessed by 2 methods:

    // method 1:
    std::cout << c1.get_pi() << '\n';
    // method 2:
    std::cout << Circle::get_pi() << '\n';

    return 0;
}
