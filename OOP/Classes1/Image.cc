#include <iostream>

#include "Image.h"



Image::Image(const std::uint32_t width, const std::uint32_t height)
{
    m_width = width; // this not exactly the cleanest way- checkout class 2
    m_height = height;
    std::cout << " image object created with shape =( "<<width<<","<<height<<")\n";

}

    // destructor
Image::~Image(){ // we dont need destructor
    std::cout << " image object destroyed \n";
}
