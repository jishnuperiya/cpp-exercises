#include <iostream>

int main()
{
    // Heap allocation
    int *p = new int;  // the variable p is in the stack, but pointing to an int variable in heap.
    *p = 4;

    std::cout << "Memory address of p: " << &p << std::endl;                     // 0xc38
    std::cout << "Memory address of pointed value: " << p << std::endl;          // 0x440
    std::cout << "Value of the memory address p points to: " << *p << std::endl; // 4

    *p = 1337;

    std::cout << "Memory address of p: " << &p << std::endl;                     // 0xc38
    std::cout << "Memory address of pointed value: " << p << std::endl;          // 0x440
    std::cout << "Value of the memory address p points to: " << *p << std::endl; // 4

    // Heap de-allocation
    delete p; // here you delete the variable (saved in the heap), who the pointer was pointing to. but not deleting the variable p itself ( which is in stack)
              // the variable 1337 is now deleted in heap and memory is freed. but p is still pointing to the same address. which can be dangerous!

    return 0;
}
