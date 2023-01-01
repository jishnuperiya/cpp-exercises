#include <iostream>

#include "Image.h"

int main()
{

    std::cout << "line 8 \n";
    {
        Image my_image1(10, 10);
    }
    std::cout << "line 12 \n";
    return 0;
}
