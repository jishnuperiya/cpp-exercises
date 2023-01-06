# include"Matrix.h"
# include <iostream>
/*
project is to create a 2d matrix
*/
int main()
{
    //either use
    //const auto m = Matrix{0.0,1.0,3.0,4.0}; here compiler will automatically find that these are double
    // or
    const auto m = Matrix<double>{0.0,1.0,3.0,4.0}; // explicitly saying to use double

    // compiler will copy paste all the contents from header data and replace T with double
    m.print_matrix();

    return 0;
}
