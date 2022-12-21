#include <iostream>
#include <cstdint>

double array_sum(double *p_array,const std::size_t length){
    double sum=0.0;
    for (std::uint16_t i =1; i<=length+1 ; i++){
        sum += p_array[i];
    }
    return sum;
}

int* array_constructor(const int &value, const std::uint32_t &length){

    int *pArray = new int[length];

    for(std::uint16_t i = 1; i<=length ; i++){

    //std::cout << i<<std::endl;
       pArray[i]=value;

    }
    return pArray;
}
