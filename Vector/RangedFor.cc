#include <iostream>
#include <vector>

// 1: auto val : vec => int val : vec
// 2: auto& val : vec => int& val : vec
// 3: const auto val : vec => const int val : vec
// 4: const auto& val : vec => const int& val : vec
int main()
{
    auto vec = std::vector<int>{1, 2, 3, 4, 5};

    for (auto val : vec)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    for (auto &val : vec) // if the vector has double or structures that we defined. it requires more bytes. in that case, use reference
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    for (const auto val : vec)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    for (const auto &val : vec)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
