#include "DynArray.h"
#include <cstdlib>

template <typename T>
DynamicArray<T>::DynamicArray()=default;

template <typename T>
DynamicArray<T>::DynamicArray(const T &value, const std::size_t length)
{
    m_length = length;
    m_data = new double[m_length];
    for (std::size_t i = 0; i < length; i++)
        {
            m_data[i] = value; // can i write this->m_data? TRY IT!
        }
}

template <typename T>
DynamicArray<T>::~DynamicArray()=default;
/*
{
    delete m_data;
}
*/

template <typename T>
void DynamicArray<T>::push_back(const T &value)
{
    T *temp = new double[m_length + 1]; // this->m_length?

    for (std::size_t i = 0; i < m_length; i++)
    {
        temp[i] = m_data[i];
        cout<<"value is "<<data[i]<<std::endl;
    }

    temp[m_length] = value;

    delete[] m_data;

    m_data = temp;

    m_length++;
}
/*
template <typename T>
void DynamicArray<T>::pop_back()
{

}

template <typename T>
T& DynamicArray<T>::operator[](const std::size_t index)
{

}

template <typename T>
const T& DynamicArray<T>::operator[](const std::size_t index) const
{

}

template <typename T>
std::size_t DynamicArray<T>::get_length() const
{

}
*/
