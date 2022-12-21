#include <cstdint>
#include <iostream>
#include "exercise.h"

void push_back(int* &input_array, const std::uint32_t &size, const int &value){

//WRONG WAY: input_array[size] = value;  --> not quiet possible since the array has only memory for 3 not for 4. memory is reserved only with new keyword!

// correct way:

    int *temp_array = new int[size+1];

    for(std::uint32_t i=0; i<size ; i++){
        temp_array[i]=input_array[i];
    }

    temp_array[size] = value;
    delete[] input_array;
    input_array = temp_array;

}

void pop_back(int* &input_array, const std::uint32_t &size){

    int *temp_array = new int[size-1];

    for(std::uint32_t i=0; i<size-1 ; i++){
         temp_array[i]=input_array[i];
    }

    delete[] input_array;
    input_array = temp_array;


}
