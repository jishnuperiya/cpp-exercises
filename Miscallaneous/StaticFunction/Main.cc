#include "Lib.h"

// 1.) global static variable
// 2.) static variable in a function
// 3.) static function
int main()
{
    function();
    //helper();  --> can not be used. since the helper function is a static function and it is defined in another 
    // compilation unit. therefore, using it here will result in linker error.
    return 0;
}
