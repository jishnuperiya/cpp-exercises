
#include <iostream>
int main(){


    int example_1dArray[3] = {1 ,2 ,3}; 
    
    // make a matrix:
    int my_matrix1[3][2]= {1,2,3,4,5,6}; // compiler is clever to take 1,2,3 for the first row and rest in 2nd row
    // better way (readability):
    int my_matrix1[3][2]= {{1,2},{3,4},{5,6}};

    return 0;
}