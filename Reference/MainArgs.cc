#include <cstdlib>
#include <iostream>

// argc: argument count
// argv: argument values

/*
examaple: the software gcc is an executable right,
you call
1)gcc            : argc = 1 , argv[0]=gcc
2)gcc --version  : argv = 2 , argv[0]=gcc, argv[1]=--version
*/
int main(int argc, char **argv) // why **argv? : read answer by jason liam: https://stackoverflow.com/questions/3024197/what-does-int-argc-char-argv-mean
{
    for (int i = 0; i < argc; ++i)
    {
        std::cout << argv[i] << std::endl;
    }

    if (argc > 1)
    {
        int arg_value = std::atoi(argv[1]);
        std::cout << arg_value << std::endl;
    }

    return 0;
}
