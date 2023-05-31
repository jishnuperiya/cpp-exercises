#include <cstdint>
#include <iostream>

const std::uint32_t NUM_PLAYERS1 = 2U;
constexpr std::uint32_t NUM_PLAYERS2 = 2U;

constexpr unsigned int faculty(unsigned int n) // allows the function to execute during compile time, saving lets say 100ms in runtime.
{
    if (n > 1)
    {
        return n * faculty(n - 1);
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    constexpr std::uint32_t n = 5;
    constexpr std::uint32_t result = faculty(n); // compiler calcualte the result during compile time itself! saves few ms of runtime.
    // the input to the function shjould also known in compilee time. therefore define the variable as constexpr
    std::cout << result << std::endl;
    return 0;
}
