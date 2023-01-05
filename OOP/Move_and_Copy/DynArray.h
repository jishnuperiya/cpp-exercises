#ifndef B5B8536C_792A_4E15_934C_1348F0717117
#define B5B8536C_792A_4E15_934C_1348F0717117

#include <cstdlib>

template <typename T>
class DynamicArray
{
public:
    DynamicArray();// it make an empty vector. doesnt reserve any memory. the value will come from push back in the future
    DynamicArray(const T &value, const std::size_t length);
    ~DynamicArray();

    void push_back(const T &value);
    void pop_back();

    // here you have 2 operators that are almost similar
    //1. T ref : imagine it as a setter
    T& operator[](const std::size_t index);
    //2. const T ref : imagine it as a getter. in the case when the value shoud not be written using the [] operator. eg . just for printing in the console
    const T& operator[](const std::size_t index) const;

    std::size_t get_length() const;

private:
    std::size_t m_length;
    std::size_t m_capacity;
    T *m_data; // heap array
};

#include "DynArray.h"
#include <cstdlib>

template <typename T>
DynamicArray<T>::DynamicArray(): m_length(0),m_capacity(1),m_data(new T[m_capacity])
// when you allocate memory for vector, you do it with capacity.
// length<=capacity
{

}

template <typename T>
DynamicArray<T>::DynamicArray(const T &value, const std::size_t length)
    : m_length(length),m_capacity(m_length > 0? length : 1),
      m_data(new T[m_capacity])
{
    for (std::size_t i = 0; i < length; i++)
        {
            m_data[i] = value;
        }
}

template <typename T>
DynamicArray<T>::~DynamicArray()
{
    if(m_data!=nullptr)
    {
        delete[] m_data; // IMPORTANT! if you forget [] in delete, then only the first memory address of heap array will be deleted
        m_data = nullptr;
    }

}


template <typename T>
void DynamicArray<T>::push_back(const T &value)
{
   // T *temp = new T[this->m_length + 1];
   // good practice: if in RHS stays a data type, it is fully enough to write auto in LHS
    auto temp = new T[this->m_length + 1];

    for (std::size_t i = 0; i < this->m_length; i++)
    {
        temp[i] = this->m_data[i];
    }

    temp[this->m_length] = value;

    delete[] this->m_data;

    this->m_data = temp;
    this->m_length++;
}

template <typename T>
void DynamicArray<T>::pop_back()
{
   // T *temp = new T[this->m_length - 1];
    auto temp = new T[this->m_length - 1];

    for (std::size_t i = 0; i < this->m_length - 1; i++)
    {
        temp[i] = this->m_data[i];
    }

    delete[] this->m_data;

    this->m_data = temp;
    this->m_length--;
}

template <typename T>
T& DynamicArray<T>::operator[](const std::size_t index)
{
    return this->m_data[index];
}


template <typename T>
const T& DynamicArray<T>::operator[](const std::size_t index) const
{
    return this->m_data[index];
}


template <typename T>
std::size_t DynamicArray<T>::get_length() const
{
    return this->m_length;
}


#endif /* B5B8536C_792A_4E15_934C_1348F0717117 */
