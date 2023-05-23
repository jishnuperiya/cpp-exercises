#include <iostream>

#define NUM_PLAYERS 2 
// not a variable, but just a a text replacement
// NUM_PLAYERS wrote in capital to symbolize that its constant and shouldnt be changed
// not usually used in modern c++. but useful in one scenario: 
// to activate / deactivate parts of the program based on preprocesser defines.

#define MODE_1
int main(){

#ifdef MODE_1
    std::cout << "Num players: " << NUM_PLAYERS <<std::endl;
#else
    std::cout << "something"; // compiler ignores this line completely and will not exist in machine code
#endif
    return 0;
}
