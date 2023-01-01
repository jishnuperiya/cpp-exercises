#include <iostream>

#include "Image.h"

int main()
{

    Image my_image1(100, 400);


    std::cout<< "width is "<<my_image1.get_width() <<"\n";

    std::cout<< static_cast<int>(my_image1.get_matrix()[0][0]) <<"\n";

    my_image1.set_pixels(10,10,255);
    my_image1.set_pixels(11,11,255);
    my_image1.set_pixels(10,11,255);
    my_image1.set_pixels(11,10,255);

    my_image1.save_image("image.bmp");

    return 0;
}
