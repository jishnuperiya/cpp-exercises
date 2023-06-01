#include <iostream>

/*
in the last program, there is a scope to improve the program
in the function we have used pass by value - here function will create a local copy -- make 
the program slower.
we can use pass by reference. 
*/

void print_int_pointer( int *&p){
    
    std::cout << "Derefernce: " << *p << " , address pointer refering to: " << p <<"  ,address of the pointer: " << &p << std::endl;
}

void print_double_pointer( double *&p){
    
    std::cout << "Derefernce: " << *p << "address pointer refering to" << p <<" address of the pointer" << &p << std::endl;
}


int main(){


int a = 1337;

int *c = &a;

print_int_pointer(c); // will print 1337

*c -= 10; // dereference and update the value : 1337 - 10 = 1327

print_int_pointer(c);  // will print 1327

int *d = &a;

print_int_pointer(d); // will print 1327

*c += 10; 

print_int_pointer(d); // will print 1337

return 0;

}
