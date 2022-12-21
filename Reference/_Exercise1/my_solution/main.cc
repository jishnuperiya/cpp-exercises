#include <iostream>
#include <cstdint>
#include "exercise.h"

int main(){

// aufgabe 1
    double *pointerArray = new double[100];

    for(std::uint16_t i = 1; i<=100 ; i++){

    //std::cout << i<<std::endl;
       pointerArray[i]=i;

    }

    auto sum= array_sum(pointerArray,100);

    std::cout << "sum is "<<sum<<std::endl;

// aufgabe 2

    int* array = array_constructor(5, 3);

    for(std::uint16_t i = 1; i<=3 ; i++){

       std::cout << array[i] << std::endl;

    }

    delete[] pointerArray;
    pointerArray = nullptr;
    delete[] array;
    array = nullptr;

    return 0;
}
