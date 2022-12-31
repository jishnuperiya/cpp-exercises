#include <iostream>
#include <vector>

void print_vector(const std::vector<int> &my_vector)
{
    for (std::size_t i = 0; i < my_vector.size(); ++i)
    {
        std::cout << my_vector[i] << std::endl;
    }
    std::cout << std::endl;
}


void print_vector_info(const std::vector<int> &my_vector)
{
    std::cout << "Size: " << my_vector.size() << std::endl;
    std::cout << "Capacity: " << my_vector.capacity() << std::endl;
    std::cout << "Empty?: " << std::boolalpha << my_vector.empty() << std::endl
              << std::endl;
}

int main()
{
    auto my_vector = std::vector<int>{1, 2, 3, 4, 5};
    print_vector(my_vector);
    print_vector_info(my_vector);

    auto p = my_vector.data(); // p is a pointer to the first block of allocated heap memory. if the vector is empty, then p will be a nullptr
    // instead of auto int* p could also be used

    std::cout << *p << std::endl;
    p += 2; // move to  2 memory block (pointer arithmetic)
    std::cout << *p << std::endl << std::endl;

    auto &f = my_vector.front(); //returns a reference to the first element
    std::cout << f << std::endl;
    f = -1;
    std::cout << f << std::endl;
    std::cout << my_vector[0] << std::endl << std::endl;

    auto &b = my_vector.back();
    std::cout << b << std::endl;
    b = -5;
    std::cout << b << std::endl;
    std::cout << my_vector[my_vector.size() - 1] << std::endl << std::endl;

    // [begin, end)
    auto begin = my_vector.begin(); // std::vector<int>::iterator .. here using auto is so helpul
    auto end = my_vector.end();
    // iterators are like pointers. we need to dereference to get the value
    std::cout << *begin << std::endl;
    std::cout << *end << std::endl << std::endl; // end iterator points to the block of memory +1 of the last value. but begin points to the memory block of first value

    ++begin;
    --end;
    std::cout << *begin << std::endl;
    std::cout << *end << std::endl << std::endl;

    for (auto it = my_vector.begin(); it != my_vector.end(); ++it)
    {
        std::cout << *it << std::endl;
    }

    return 0;
}
