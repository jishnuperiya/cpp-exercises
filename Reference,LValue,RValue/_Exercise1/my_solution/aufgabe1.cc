#include <iostream>
#include <cstdint>

double array_sum(double *p_array,const std::size_t length){
    double sum=0.0;
    for (std::uint16_t i =1; i<=length+1 ; i++){
        sum += p_array[i]; 
    }
    return sum;
}


int main(){

    double *pointerArray = new double[100];
    
    for(std::uint16_t i = 1; i<=100 ; i++){
        
    //std::cout << i<<std::endl;
       pointerArray[i]=i;

    }

    auto sum= array_sum(pointerArray,100);

    std::cout << "sum is "<<sum<<std::endl;

    return 0;
}