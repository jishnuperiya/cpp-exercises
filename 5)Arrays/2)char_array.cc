#include <iostream>

int main() {

//1) what is character array?

std::cout << "hello"<<std::endl; // "hello" is a character array. but size is 6. but only 5 letters. WHY?

// above given char array contains implicit the \0 at the end. can also be write as follows, but not needed.
std::cout << "hello\0"<<std::endl;

// /0 tells the compiler that the my char array is ending here.


//2) defining a character array:

// one way
const char my_first_name[] = {'j','i','s','h','n','\0'};

std::cout << my_first_name<<std::endl;

// 2nd way
const char my_last_name[] = "jishn"; // the length of the array will be determined by the compiler automatically
std::cout << my_last_name<<std::endl;


}