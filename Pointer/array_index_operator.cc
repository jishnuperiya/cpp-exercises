#include <iostream>


// ARR[i] = *(ARR+i)

void print_array1(const std::int32_t *arr, const std::size_t len){


    for (int i = 0; i < len; i++) 
    {
        std::cout << arr[i] << std::endl; // but arr is pointer and why you do squre bracket indexing to a pointer?! - next lesson
    }


    // here is one more problem with c style arrays. if name the function arguments as *p instead of *arr. it creates confusion if the pointer
    // points to an integer or to an array. if its integer p[i] doesnt give us useful anything
}


void print_array2(const std::int32_t *arr, const std::size_t len){


    for (int i = 0; i < len; i++) 
    {
        std::cout << *(arr+i) << std::endl; //arr[i] is for more readability. arr[i] = *(arr+i)
    }
}

int main()
{

     
    constexpr std::size_t arr_len = 4U;
    const std::int32_t values[arr_len]{1, 2, 3, 4}; 
     
     print_array1(values,arr_len);

    return 0;
}
