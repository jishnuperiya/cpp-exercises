# include"Matrix.h"
# include <iostream>
/*
project is to create a 2d matrix
*/
int main()
{
    auto m1 = Matrix<double>{0.0,1.0,3.0,4.0}; // m1 can not be const, because the += and -= Opertors will change the value of m1

     auto m2 = Matrix<double>{0.0,1.0,3.0,4.0}; // value of m2 is not being changed by the += operator. therefore it is constant

    const auto m3 = m1 + m2;

    const auto m4 = m1 - m2;

    m1+=m2;
    m1.print_matrix();
    m1-=m2;
    m1.print_matrix();

    m3.print_matrix();
    m4.print_matrix();

    return 0;
}
