#include <iostream>

int main()
{   
    
    int a = 1;
    int b = 2;
    int c = 3; // a,b and c are stack varialbes

    int *p_d = &a;
    int *p_e = &b;
    int *p_f = &c; //p_d, p_e and p_f are stack variables. these pointers
    // can point other memory addresses either in stack or heap. in this particular
    // case, they pointing to memory address of stack variable.

    *p_d = (2 * (*p_e)) + (3 * (*p_f)); // 2 * 2 + 3*3 = 13. so variable a will be assigned with 13
    p_d = &b; // now p_d points to b!
    p_f = &a; // pf also poitning to a

    *p_e = *p_d + *p_f; // 2+13 = 15 . now the value of b is 15.

    std::cout << a << std::endl; // 13
    std::cout << *p_d << std::endl; // 15
    //std::cout << *p_e << std::endl; // 15
    //std::cout << *p_f << std::endl; // 13

    return 0;
}
