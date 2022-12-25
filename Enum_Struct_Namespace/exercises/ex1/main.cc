#include <iostream>
#include <cstdint>

#include "array_mean.h"


int main(){

    constexpr std::uint32_t array_elements = 5;
    int array_a[array_elements] = { 1, 2, 3, 4, 5 };
    double array_b[array_elements] = { 1.0, 2.5, 3.5, 4.5, 10.0 };

    computation::Dataset array_means = {.mean_array_a = computation::mean_array_value(array_a, array_elements),.mean_array_b = computation::mean_array_value(array_b, array_elements) };

    // Ausgabe ist: Mean Array A: 3

    std::cout << "Mean Array A: " << array_means.mean_array_a << std::endl;
    // Ausgabe ist: Mean Array B: 4.3
    std::cout << "Mean Array B: " << array_means.mean_array_b << std::endl;

    return 0;
}
