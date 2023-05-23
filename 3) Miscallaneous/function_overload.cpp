#include <iostream>

double add(double a, double b){
    return a + b;
}

int add(int a, int b){
    return a+a+b;
} 
int main(){
int a= 10;
int b=7;

double c=10;
double d=7;

std::cout << add(a,b) << std::endl;
std::cout << add(c,d) << std::endl;

}