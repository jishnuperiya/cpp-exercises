#include <iostream>

void print_array(const std::int32_t *arr, const std::size_t len){
      /*passing arr[] is not customary in c++ programming. if you do sizeof(arr) it will give 8 bytes. means arr
    is a pointer. therefore the correct way to pass array to a function is *arr ( see next chapter: ArrayPointerDecay)

    arr is pointer and it shows the memory address of first array elmenet*/


    // arr is a pointer to the fist element in an array. and you need length variable
    // to see how far in the memory, array is stretched out

    for (int i = 0; i < len; i++)
    {
        std::cout << arr[i] << std::endl; // but arr is pointer and why you do squre bracket indexing to a pointer?! - next lesson
    }
}

int main()
{


    constexpr std::size_t arr_len = 4U;
    const std::int32_t values[arr_len]{1, 2, 3, 4};

     print_array (values,arr_len);

    return 0;
}
