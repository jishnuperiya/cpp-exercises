#include <cstdint>
#include <iostream>

/*
And if you have this static variable in a source code (not header file), this variable is visible
only in the scope of this file. can not be used outside of this file.
Means the varible can only be used in the compilation unit
wher it has been defined.

you can also have a static variable inside a function. which is given below as an example.
*/
constexpr static std::uint32_t NUM_PLAYERS2 = 2U;



void f()
{
    //std::uint32_t counter = 0; --> this variable will go out of scope (die) when the function is finished.
    // if you want the variable to persist use 'static'

    static std::uint32_t counter = 0; // it wont be defined in every function call. but during compilation the memory required
    // for this varialble is allocated during the compile time itself

    /*
    you can also define static std::uint32_t counter = 0 , outside the function. but not constexpr (because counter is not a fixed value variable. it increments right?)
    BUT, avoid defining variable as global if you really need it to be global. counter is only used inside the function. therfore for that you dont need it to be global.
    So define it only in the function.
    */

    std::cout << "Called f: " << counter << std::endl;

    ++counter;
}

int main()
{
    f();
    f();
    f();
    f();

    return 0;
}
