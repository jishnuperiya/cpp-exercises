#ifndef B917D7CD_DDDA_4CC9_B53D_A9057EBCA6F2
#define B917D7CD_DDDA_4CC9_B53D_A9057EBCA6F2
#ifndef DD24EA2B_BD4A_4FD5_94BD_D199DE79E6DC
#define DD24EA2B_BD4A_4FD5_94BD_D199DE79E6DC
#include <iostream>
template <typename T>
class Matrix
{
    public:
    Matrix(); // construct with empty parameter list. will fill the matrix with zeros
    Matrix(const T &A,const T &B,const T &C,const T &D);
    ~Matrix() = default;

    Matrix operator+(const Matrix &rhs)const; // return type is Matrix
    // IMPORTANT: USE of constant in function: see in main.cc, a const class object is passed. then the function should be
    // defined as const. otherwise compiler will throw error that the function is trying to change the state of the object
    Matrix operator-(const Matrix &rhs)const;

    Matrix operator+=(const Matrix &rhs); // function not constant - becuase we are changing the current object (this)
    // but the argument is const. because we are not altering the rhs
    Matrix operator-=(const Matrix &rhs); // function not constant - becuase we are changing the current object (this)
    void print_matrix()const;
    T get_A()const;
    T get_B()const;
    T get_C()const;
    T get_D()const;

    void set_A(const T &new_A);
    void set_B(const T &new_B);
    void set_C(const T &new_C);
    void set_D(const T &new_D);

    private:
    T m_A;
    T m_B;
    T m_C;
    T m_D;
};

template <typename T>
Matrix<T>::Matrix() : m_A(0.0),m_B(0.0),m_C(0.0),m_D(0.0) // you need to specifically add classname<T>::  , when you use class scope
{
}

template <typename T>
Matrix<T>::Matrix(const T &A,const T &B,const T &C,const T &D)
    :m_A(A),m_B(B),m_C(C),m_D(D)
{
}

template <typename T>
Matrix<T> Matrix<T>::operator+(const Matrix<T> &rhs)const{ // return type is Matrix<T>
// here the const keyword says that the the instance that is being passed to this method will not be modified - a promise
// const is important because the argument passed is const and we should specify the function that it will be also constant
    auto result = Matrix{};
    result.set_A(this->get_A()+rhs.get_A());
    result.set_B(this->get_B()+rhs.get_B());
    result.set_C(this->get_C()+rhs.get_C());
    result.set_D(this->get_D()+rhs.get_D());

    return result;
}

template <typename T>
Matrix<T> Matrix<T>::operator-(const Matrix<T> &rhs)const{ // return type is Matrix<T>
// here the const keyword says that the the instance that is being passed to this method will not be modified - a promise
// const is important because the argument passed is const and we should specify the function that it will be also constant
    auto result = Matrix{};
    result.set_A(this->get_A()-rhs.get_A());
    result.set_B(this->get_B()-rhs.get_B());
    result.set_C(this->get_C()-rhs.get_C());
    result.set_D(this->get_D()-rhs.get_D());

    return result;
}



template <typename T>
Matrix<T> Matrix<T>::operator+=(const Matrix<T> &rhs){
    if (this==&rhs){
        std::cout << "Warninng: RHS IS this!!!!"<<std::endl;
    return *this;
    }
    this->set_A(this->get_A()+rhs.get_A());
    this->set_B(this->get_B()+rhs.get_B());
    this->set_C(this->get_C()+rhs.get_C());
    this->set_D(this->get_D()+rhs.get_D());

    return *this;

}

template <typename T>
Matrix<T> Matrix<T>::operator-=(const Matrix<T> &rhs){
    if (this==&rhs){
        std::cout << "Warninng: RHS IS this!!!!"<<std::endl;
    return *this;
    }
    this->set_A(this->get_A()-rhs.get_A());
    this->set_B(this->get_B()-rhs.get_B());
    this->set_C(this->get_C()-rhs.get_C());
    this->set_D(this->get_D()-rhs.get_D());

    return *this;

}
template <typename T>
void Matrix<T>::print_matrix()const
{
    std::cout << m_A << " "<<m_B<<"\n";
    std::cout << m_C << " "<<m_D<<"\n";
}

template <typename T>
T Matrix<T>::get_A()const{return m_A;}


template <typename T>T
Matrix<T>::get_B()const{return m_B;}

template <typename T>
T Matrix<T>::get_C()const{return m_C;}

template <typename T>
T Matrix<T>::get_D()const{return m_D;}

template <typename T>
void Matrix<T>::set_A(const T &new_A){m_A=new_A;}

template <typename T>
void Matrix<T>::set_B(const T &new_B){m_B=new_B;}

template <typename T>
void Matrix<T>::set_C(const T &new_C){m_C=new_C;}

template <typename T>
void Matrix<T>::set_D(const T &new_D){m_D=new_D;}


#endif /* DD24EA2B_BD4A_4FD5_94BD_D199DE79E6DC */


#endif /* B917D7CD_DDDA_4CC9_B53D_A9057EBCA6F2 */
