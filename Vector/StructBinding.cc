#include <iostream>
#include <vector>

// C++ 17 feature

struct Data
{
    float x;
    float y;
};

int main()
{
    auto vec = std::vector<Data>{Data{1.0F, 2.0F}, Data{4.0F, 6.0F}};

    for (const auto &s : vec)
    {
        std::cout << s.x << ""<<s.y << std::endl;
    }

    // but the attributes of structure s can be directly unpacked within the for() line itself,
    // as shown below (c++17)


    for (auto [x_, y_] : vec)
    {
        x_ = -1.0F;
        std::cout << x_ << " " << y_ << std::endl;
    }

    for (auto &[x_, y_] : vec)
    {
        std::cout << x_ << " " << y_ << std::endl;
    }

    return 0;
}
