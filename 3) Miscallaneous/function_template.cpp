#include <iostream>

template <typename T>
T add(T a, T b){
    return a+b;
}


// Question: what if a and b are of different types?
// To handle addition of values of different types, you would need to overload the function for specific types

template <typename T, typename U>
auto add(T a, U b) {
    return a + b;
}


int main(){
int a= 10;
int b=7;

double c=12;
double d=7;

int e=12;
float f=0.50;

std::cout << add(a,b) << std::endl;
std::cout << add(c,d) << std::endl;
std::cout << add(e,f) << std::endl;




}
