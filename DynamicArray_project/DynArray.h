#pragma once

#include <cstdlib>

struct DynamicArray  // it make sense to store the pointer and array length in a struct for better organization
{
    double *m_data;
    std::size_t m_length;
};

DynamicArray create_dynamic_array(const double &value, const std::size_t &length);

void push_back(DynamicArray &dynmaic_array, const int &value);

void pop_back(DynamicArray &dynmaic_array);
