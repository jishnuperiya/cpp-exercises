#include <cstdint>
#include <iostream>

int main()
{

    std::int32_t *p = new std::int32_t{4};
    // or: auto  *p = new std::int32_t{4};

    delete p; // delete the variable in the heap. not pointer

    std::cout << p << std::endl; // still points to the address!
    std::cout << *p << std::endl; // will give a garbage value!

    // THE CORRECT WAY:

    std::int32_t *q = new std::int32_t{4};

    delete q; // delete the variable in the heap. not pointer
    q = nullptr;
    
    std::cout << q << std::endl; // will give 0. :)
    // also NOT POSSIBLE TO DEREFERENCE A NULLPTR

    if(q !=nullptr){
        std::cout << q << std::endl; 
        std::cout << *q << std::endl; 
    }
    else{
        std::cout << " q doesnt point to any memory! \n";
    }

    return 0;
}
