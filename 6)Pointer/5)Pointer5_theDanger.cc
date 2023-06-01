#include <iostream>

/*
In this program we will see a possible dangerous thing that can happen when we deal with pointers
*/

void print_int_pointer( int *&p){
    
    std::cout << "Derefernce: " << *p << " , address pointer refering to: " << p <<"  ,address of the pointer: " << &p << std::endl;
}

void print_double_pointer( double *&p){
    
    std::cout << "Derefernce: " << *p << "address pointer refering to" << p <<" address of the pointer" << &p << std::endl;
}


int main(){


int a = 1337;

float b = -13.37;

int *c = &a;

*c = b; // HERE YOU REPLACE THE INTEGER WITH A FLOAT - NOT A GOOD IDEA - AND COMPILER WONT GIVE A WARNING!

print_int_pointer(c); // IT WILL PRINT ONLY -13. will omit the 0.37 .

// BE CAREFUL WITH THE DATATYPES!!!


return 0;

}
