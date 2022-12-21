#include <iostream>


/*
in the previous code we saw value copy. there are 2 alternative way to do it*/

void f1(int v) // value copy
{
    std::cout << &v << std::endl;
}

void f2(int *v) // alternative approach 1: use pointer (c style) - dont use it in modern c++
// why not use in modern c++? - to get value,we need to dereference (cost of operation), danger with null pointer 

{
    std::cout << v << std::endl;
}

void f3(int &v) // alternative approach 2: reference (c++ style)
{
    std::cout << &v << std::endl;
}

int main()
{
    int a = 2;
    std::cout << &a << std::endl;

    f1(a);
    f2(&a);
    f3(a);
    

    return 0;
}

/*
output example:
0x61ff0c : address of a
0x61fef0 : address of local variable in f1
0x61ff0c : address of a
0x61ff0c : address of a
*/

/*
IMPORTANT
---------------
actually, the compiler convert f3( int &v) -> f3( int *const v): reference is just a constant pointer.
assembler code will generate a constant pointer under the hood, when you use reference in a function.

So sometime, pass by reference can be expensive than pass by value. HOW?
-----------------------------------------------------------------------
so in pass by reference, the assembler code will generate a constant pointer under the hood. and a pointer 
cost memory ofcourse. how much memory if i may ask? - 64 bit(8 bytes) for 64 bit system and 32 bits (4 bytes)
for a 32 bit system. 
suppose your system is 64bits. so passing a variable who hold more than 8 bytes of memory - better to use reference.
if the variable only 2 bytes. use pass by value. because using pass by reference, pointer cost 8 bytes!


also use pass by reference if you want to change the state of the argument.
*/