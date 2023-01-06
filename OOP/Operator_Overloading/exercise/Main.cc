# include"Matrix.h"
# include <iostream>
/*
project is to create a 2d matrix
*/
int main()
{
    auto m1 = Matrix<double>{1.0,1.0,1.0,1.0}; // m1 can not be const, because the += and -= Opertors will change the value of m1

    auto m2 = Matrix<double>{0.0,1.0,3.0,4.0}; // value of m2 is not being changed by the += operator. therefore it is constant


    auto m3=m1 * 3;
    m3.print_matrix();

    m3/=2;
    // m3=m3 / 2;
    m3.print_matrix();


    return 0;
}
