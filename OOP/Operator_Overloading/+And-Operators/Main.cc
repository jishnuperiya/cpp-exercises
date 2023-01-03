# include"Matrix.h"
# include <iostream>
/*
project is to create a 2d matrix
*/
int main()
{
    const auto m1 = Matrix<double>{0.0,1.0,3.0,4.0}; // explicitly saying to use double

    const auto m2 = Matrix<double>{0.0,1.0,3.0,4.0}; // explicitly saying to use double

    const auto m3 = m1 + m2;

    const auto m4 = m1 - m2;

    m3.print_matrix();
    m4.print_matrix();

    return 0;
}
