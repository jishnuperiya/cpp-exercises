#include <iostream>

void print_array(const std::int32_t arr[], const std::size_t len){

    /* this is a problem with C style array. we have to give length as a parameter to 
    the function.
    sizeof dont work in arrays. if you do sizeof(arr)--> it gives 8 bytes (which is the size of a memory address in a 64 bit system. 64bit = 8bytes)
    sizeof(arr), gives the size of the pointer. So sizeof DOESNT WORK
    */

    for (int i = 0; i < len; i++) // array size=3. but 4 is given
    {
        std::cout << arr[i] << std::endl; // values[4] will be a garbage value! VORSICHT
    }
}

int main()
{

     
    constexpr std::size_t arr_len = 4U;
    const std::int32_t values[arr_len]{1, 2, 3, 4}; 
     
     print_array (values,arr_len);

    return 0;
}
