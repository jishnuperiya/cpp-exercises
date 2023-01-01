#include <iostream>

#include "Image.h"

int main()
{

    std::cout << "line 8 \n";
    { // creating a scope to see when is the destructor being calles
        Image my_image1(10, 10);
    } // by this curly brace,the variable my_image will go out of scope and will be deleted from stack. so destructor is called here
      // so destructor is called when the value go out of scope
    std::cout << "line 12 \n";
    return 0;
}
