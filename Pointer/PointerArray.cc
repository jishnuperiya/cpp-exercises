#include <cstdint>
#include <iostream>

/*
to allocate memory in heap to allocate many values hintereinander - this is the use of array!
*/
int main()
{
    std::uint32_t array_size = 10; // array size not constant. no need to know during compiler time, like the stack arrays that we saw previously
    // note: size is defined, but not constant.

    // Heap allocation
    int *p = new int[array_size]; // pointer points to the first address of the block that we reserved
    // here we reserved 10 integers --> means 40 bytes in heap is reserved. and the p is pointing to the first byte

    for (std::uint32_t i = 0; i < array_size; ++i)
    {
        p[i] = i;  // NOTE: pointer array can be indexed like a stack array!! no dereferencing
    }

    for (std::uint32_t i = 0; i < array_size; ++i)
    {
        std::cout << p[i] << std::endl;
    }

    // Heap de-allocation
    delete[] p; //SQUARE BRACKETS IMPORTANT: if you do only delete p (which is a source of error), 
    // only the first integer will be freed. only 4 bytes. rest 36 bytes are not freed

    return 0; // when the program ends, the heap variables will be automatically deleted. 
    //but the problem happens in big programs when it runs for long time- software in car for example, when it runs for long time
}
