#include <iostream>
#include <cstdint>
#include "array_mean.h"

namespace computation {

    double mean_array_value(int *array, const std::size_t length){
        double sum = 0.0;
        for (std::uint32_t i = 0; i<length;i++){
            sum+=array[i];
        }
        return sum / length;
    }

    double mean_array_value(double *array, const std::size_t length){
        double sum = 0.0;
        for (std::uint32_t i = 0; i<length;i++){
            sum+=array[i];
        }
        return sum / length;
    }
};
