#include <cmath>
#include <iostream>
#include <vector>

template <typename T>
void fill_vector(std::vector<T> &vec)
{
    int i = 0;

    for (auto &value : vec)
    {
        value = static_cast<T>(i);
        i++;
    }
}
template <typename T>
void print_vector(const std::vector<T> &vec)
{
    int i = 0;

    for (const auto &value : vec)
    {
        std::cout << "Vec[" << i << "] = " << value << std::endl;
        i++;
    }
    std::cout << std::endl;
}

template <typename T>
void exp_vector(std::vector<T> &vec)
{
    for (auto &value : vec)
    {
        value = std::exp(value);
    }
}

template <typename T>
void log_vector(std::vector<T> &vec)
{
    for (auto &value : vec)
    {
        value = std::log(value);
    }
}


int main()
{
    auto my_vector1 = std::vector<std::int32_t>{3,0};

    auto my_vector2 = std::vector<float>{3,0};

    auto my_vector3 = std::vector<char>{3,0};

    fill_vector(my_vector1);
    print_vector(my_vector1);

    fill_vector(my_vector2);
    print_vector(my_vector2);

    fill_vector(my_vector3);
    print_vector(my_vector3);


    return 0;
}
