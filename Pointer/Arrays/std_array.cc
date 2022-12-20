#include <iostream>
#include <cstdint>
#include <array>


/*
NEVER USE C STYLE ARRAYS:
USE STD::ARRAY
*/

template <std::size_t N> // text ersetzung by the compiler

void print_array(const  std::array<std::int32_t,N> arr){

    for (int i = 0; i < arr.size(); i++) // std::array has size() function
    {
        std::cout << arr[i] << std::endl;
}

int main()
{
     
    constexpr std::size_t arr_len = 4U;
    const std::array<std::int32_t,arr_len> values = {1, 2, 3, 4}; 
     
    print_array(values); 

    return 0;
}
