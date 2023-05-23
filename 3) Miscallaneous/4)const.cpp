// better alternative to #define

#include <iostream>
#include <cstdint>

int main(){
    
    const std::uint32_t num_players = 2U;

    for (std::uint32_t i=0; i < num_players ; i ++ ){
        std::cout << " Hi" <<std::endl;
    }
}