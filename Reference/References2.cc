#include <iostream>

// Call by Value (local copy)
void f(int *p_function)
{
    std::cout << "(F):  p_function = " << p_function << std::endl;
    std::cout << "(F): &p_function = " << &p_function << std::endl;
}

// Call by Reference
void g(int *&p_function)
{
    std::cout << "(G):  p_function = " << p_function << std::endl;
    std::cout << "(G): &p_function = " << &p_function << std::endl;
}

int main()
{
    int *p_number = new int{4};

    std::cout << "(MAIN):  p_number = " << p_number << std::endl;
    std::cout << "(MAIN): &p_number = " << &p_number << std::endl;

    f(p_number);

    g(p_number);

    return 0;
}


/*
output from my system:
(MAIN):  p_number = 0x10a1630
(MAIN): &p_number = 0x61ff0c
(F):  p_function = 0x10a1630
(F): &p_function = 0x61fef0
(G):  p_function = 0x10a1630
(G): &p_function = 0x61ff0c
*/