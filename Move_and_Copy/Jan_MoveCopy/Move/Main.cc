#include <cstddef>
#include <iostream>
#include <vector>

#include "DynArray.h"

int main()
{
    std::vector<DynamicArray<int>> vec;
    auto a = DynamicArray<int>{1, 1};
    // move:
    vec.push_back(DynamicArray<int>{1, 1});
    // DynamicArray<int>{1, 1} -> it is a tempeorary object. not a variable that existed before
    // means it is an r value

    //copy:
    vec.push_back(a);
    return 0;
}
