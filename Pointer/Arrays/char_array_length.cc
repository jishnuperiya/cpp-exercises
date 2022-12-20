#include <iostream>
#include <cstdint>

/*
finding the size of the character array without using sizeof function!
*/


int main(){

    char array1[] = "hello world";

    std::uint32_t len = 0;
    while(true){

        if(array1[len] != '\0')
         ++len;
         else
         break;

    }

    std::cout << "length: " <<len << '\n';

    return 0; 
}