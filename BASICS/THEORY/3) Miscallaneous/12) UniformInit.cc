#include <iostream>

int main()
{
    auto k = 10.0;

    // Bad
    int m = k;
    std::cout << m << std::endl;

    // Semi-Bad  -- gives a narrowing warning.
    auto n = static_cast<int>(k);
    std::cout << n << std::endl;

    // Good
    // Uniform Init.
    auto l = int{k};
    std::cout << l << std::endl;


    // SUMMARY: when you take value from another datatype to initialize
    // another datatype, always do uniform initialization.
    // left side, use auto. right side use datatype{variable whose value to be copied}


    return 0;
}
