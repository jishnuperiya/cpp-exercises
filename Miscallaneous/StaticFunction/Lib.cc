#include <iostream>

#include "Lib.h"

static void helper()
{
    std::cout << "Internal Function\n";
}

void function()
{
    std::cout << "Function\n";

    helper(); // static function can be used in the same compilation unit. not outside. here it will work
}
