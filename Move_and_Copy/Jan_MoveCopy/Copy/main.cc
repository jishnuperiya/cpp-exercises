#include <cstddef>
#include <iostream>

#include "DynArray.h"

int main()
{
    DynamicArray<int> a1(1.0, 3);
    DynamicArray<int> a2(-1.0, 4);

    DynamicArray<int> a3 = a2;   // Copy constructor
    DynamicArray<int> a4(a2);    // Copy constructor
    DynamicArray<int> a5{a2}; //->suggested way to write   // Copy constructor
    DynamicArray<int> a6 = {a2}; // Copy constructor

    a1 = a2; // Copy assignment operator

// ignore what is in writen below ( its to avoid compiler warnings)
    (void)a3; // Dummy
    (void)a4; // Dummy
    (void)a5; // Dummy
    (void)a6; // Dummy

    return 0;
}
