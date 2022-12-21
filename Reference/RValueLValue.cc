#include <iostream>

// LValue: Left
// RValue: Right

/*
An lvalue (locator value) represents an object that occupies some identifiable location in memory (i.e. has an address).

rvalues are defined by exclusion. Every expression is either an lvalue or an rvalue, so, an rvalue is an expression that
does not represent an object occupying some identifiable location in memory.
*/

void copy_by_value(int v)
{
    std::cout << v << std::endl;
}

void copy_by_value_const(const int v)
{
    std::cout << v << std::endl;
}

void reference(int &v)
{
    std::cout << v << std::endl;
}

void reference_const(const int &v)
{
    std::cout << v << std::endl;
}

int main()
{
    int lvalue = 2;
    const int lvalue_const = 2;

    copy_by_value(lvalue);
    copy_by_value(lvalue_const);
    copy_by_value(2); // 2 is rvalue

    copy_by_value_const(lvalue);
    copy_by_value_const(lvalue_const);
    copy_by_value_const(2);

    reference(lvalue);
    // reference(lvalue_const); not possbile
    // reference(2); not possible

    reference_const(lvalue);
    reference_const(lvalue_const);
    reference_const(2); // its okay to pass

    return 0;
}
