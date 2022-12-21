#include <cstdint>
#include <iostream>

#include "exercise.h"

int main()
{
std::uint32_t size = 3;
int *my_data = new int[size];

my_data[0] = 0;
my_data[1] = 1;
my_data[2] = 2;

std::cout << " push back test" <<std::endl;

push_back(my_data,size, 3);
size++;

for (std::uint32_t i = 0; i< size; i++){
    std::cout << my_data[i]<<std::endl;
}

std::cout << " pop back test" <<std::endl;
pop_back(my_data,size);
size--;


for (std::uint32_t i = 0; i< size; i++){
    std::cout << my_data[i]<<std::endl;
}


delete[] my_data;
my_data = nullptr;

return 0;
}
