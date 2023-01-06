#include <cmath>
#include <cstdlib>

#include "AlgoArray.h"
#include "DynArray.h"



double sum(const DynamicArray &dynamic_array){

    double sum_value = 0.0; // you cant name the variable sum, as it is the function name

    for (std::size_t i= 0; i < dynamic_array.m_length; i++){
        sum_value +=dynamic_array.m_data[i];
    }

    return sum_value;
}

double mean(const DynamicArray &dynamic_array){


    return sum(dynamic_array)/static_cast<double>(dynamic_array.m_length);
    // static cast because sum is double and array length is size_t which is unsigned int

}

double median(const DynamicArray &dynamic_array)
{
    const bool has_even_length = dynamic_array.m_length % 2 == 0;

    if (has_even_length)
    {
        const std::size_t index1 = dynamic_array.m_length / 2;
        const std::size_t index2 = (dynamic_array.m_length / 2) - 1;
        return (dynamic_array.m_data[index1] + dynamic_array.m_data[index2]) / 2.0;
    }

    const std::size_t index = dynamic_array.m_length / 2;
    return dynamic_array.m_data[index];
}
