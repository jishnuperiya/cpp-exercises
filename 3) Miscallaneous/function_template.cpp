#include <iostream>

template <typename T>
T add(T a, T b){
    return a+b;
}

int main(){
int a= 10;
int b=7;

double c=12;
double d=7;

std::cout << add(a,b) << std::endl;
std::cout << add(c,d) << std::endl;

}