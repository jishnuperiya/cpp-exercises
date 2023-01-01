#include <iostream>

#include "Image.h"



Image::Image(const std::uint32_t width, const std::uint32_t height) : m_width(width),
m_height(height), m_matrix(m_width,std::vector<std::uint8_t>(m_height,0))
// initialized m_matrix with 0 everywhere, means image is complete dark
// you cant initialize m_matrix before width or height as it uses both width and height

{


    std::cout << " image object created with shape =( "<<width<<","<<height<<")\n";

}

    // destructor
Image::~Image(){ // we dont need destructor
    std::cout << " image object destroyed \n";
}
