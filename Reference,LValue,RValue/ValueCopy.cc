#include <iostream>

void f(int v)
{
    std::cout << &v << std::endl;
}

int main()
{
    int a = 2;
    std::cout << &a << std::endl;

    f(a);

    // both will give seperate addresses. since the function create another local copy and store in another address

    return 0;
}
