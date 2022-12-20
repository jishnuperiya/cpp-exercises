#include <iostream>

int main()
{
    char last_name[] = "Schaffranek";
    std::cout << last_name << std::endl; // you can cout the whole array

    int values[]{1, 2, 3};  // if you do cout<< values; --> only 1 will be printed

    for (int i = 0; i < 4; i++) // array size=3. but 4 is given
    {
        std::cout << values[i] << std::endl; // values[4] will be a garbage value! VORSICHT
    }

    std::cout << values << std::endl;

    return 0;
}
