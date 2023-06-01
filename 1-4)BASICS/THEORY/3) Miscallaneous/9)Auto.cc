#include <iostream>

int main()
{
    auto a = 12U;
    auto b = static_cast<float>(a);

    auto c = 12.3F; // if you do auto c= 12.3, compiler will deduce c to be double. when you use 12.3F, compiler deduce c to be float
    auto d = static_cast<float>(c);

    /*
    dont use auto everywhere. it reduceses readability.
    */

    return 0;
}
