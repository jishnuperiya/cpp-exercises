
#include <iostream>
#include <cstdint>

// #define NUM_PLAYERS 2 // not a variable- and gives headache while debugging. varialble wouldve been easier.
// soultion is:
constexpr std::uint32_t NUM_PLAYERS = 2;   //not defined in the scope of a function, but global scope
// preferred to keep the global constant in caps lock. constant inside functions can be small case

// difference between const and constexpr?
constexpr std::uint32_t NUM_PLAYERS = 2; // variable known during compile time

const std::uint32_t NUM_PLAYERS = 2; // variable need not to be known during compile time 

/*
The primary difference between const and constexpr variables is that the initialization of a const variable 
can be deferred until run time. A constexpr variable must be initialized at compile time.
*/
int main(){
    

    for (std::uint32_t i=0; i < NUM_PLAYERS ; i ++ ){
        std::cout << " Hi" <<std::endl;
    }
}