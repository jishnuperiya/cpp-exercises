#include <iostream>


void copy(int v) // copy - input but modifiable
{
    std::cout << &v << std::endl;
}

void copy_const(const int v) // copy - input only because of const
{
    std::cout << v << std::endl;
}

void reference_input(const int &v) // input only because of const
{
    std::cout << &v << std::endl;
}

void reference_input_output(int &v) // input and output
{
    std::cout << &v << std::endl;
}

int main()
{
    int a = 2;
    std::cout << &a << std::endl;

     

    return 0;
}