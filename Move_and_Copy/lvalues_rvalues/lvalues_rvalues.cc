#include <iostream>
/* learn why you should care about l values and r values
   learn what is lvalue references and r value references
*/
int getvalue()
{
    return 10;
}

int& getvalue2()
{
    static int value = 10;
    return value;
}

void setValue(int value)
{

}

void setValue2(int& value)
{

}


void setValue3(const int& value)
{

}

void printName(std::string& name)
{
    std::cout << name <<std::endl;
}

void printName2(const std::string& name)
{
    std::cout << name <<std::endl;
}

void printName3(std::string&& name)
{
    std::cout << name <<std::endl;
}


int main()
{
    // 1) WHAT IS LVALUE AND RVALUE
    /*some people define lvalue as located value
    but dont define them. but try to understand them
    defiingn lvalue to be lcoated values is little bit of trap*/

    int i = 10; // here i is lvalue, 10 is rvalue
    // you cant assign something to rvalue. you cant do 10 = i. 10 is not something
    // which has a memory. you cant store anything in 10
    int a = i; // lvalue = lvalue

    //rvalue need not to be always something like a numerical literal.
    // it can also be a function return
    int j=getvalue(); // fn returns a temperoray value-rvalue
    getvalue()=5; // Error: expression must be a modifiable l value. (modifialble means non const)

    //2) LVALUE-REFERNCE
    getvalue2() = 5; //getvalue2 returns an lvalue reference

    // you can call setVAlue with lvalue or rvalue
    setValue(i);
    setValue(10);
    // you can not take lvalue refernce from a rvalue
    setValue2(i);
    setValue2(10); //ERROR- intial value of reference to non-const must be an lvalue


    //3) WHAT IS THE DEAL WITH CONST,NON-CONST IN LVALUE RVALUE SCENARIOß

    // rules:
    // lvalue reference can not take r value
    int &b = 1; //ERROR- intial value of reference to non-const must be an lvalue
    // but const lvalue reference CAN take r value
    const int &c=2; // PERFECT

    // so the setValue3 accepts both lvalue and rvalue as the argument is a const lvalue reference
    setValue3(i);
    setValue3(2);

    // ANOTHER EXAMPLE:
    std::string firstname="jisnu";
    std::string lastname ="periya";
    std::string name = firstname+lastname;
    //firstname,lastname,name - lvalues
    // "jisnu","periya",firstname+lastname - rvalues

    // firstname+lastname is a temporary object. a temperoray object is constructed
    // from the the strings firstname and lastname

    printName(name);
    printName(firstname+lastname); // doesnt work

    printName2(firstname+lastname); // since you can assign rvalue to a const reference lvalue

    /*
    IMPORTANT: that is why there are lot of
    const references being written in c++. becuase they are compatible with
    both lvalue and the temperoray rvalue.
    */

   // so we clearly have a way to detect whether or not a variable is an actual lvalue
   // write an lvalue refernce that is non const

   // as shown below
   std::string& myname=firstname+lastname;
   const std::string& myname=firstname+lastname;

    // CAN WE WRITE A FUNCTION THAT ACCEPTS ONLY R VLAUES?
    // yes. for that you need r value reference.

    // you need 2 ampersants- check function printName3
    // see now the errors are switched
   printName3(name); // ERROR: an r value reference cannot bound to an lvalue
   printName3(firstname+lastname);

   // what you can do is you can make an overloaded fucntion that take constnat lvalue references and i other one
   // rvlaue references so that everyting works!

   // BUT HOW THESE ARE USEFUL?

    /*
    main adv- optimizaiton
    if we know we are taking an rvalue, we can just steal the resources that might be attached to the
    object and use it. you dont have to worry about keepting it alive. becuase we know that it is temporary*/

    // more power of lvalue and rvalue can be seen in move semantics







}
