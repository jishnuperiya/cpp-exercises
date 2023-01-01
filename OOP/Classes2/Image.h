#include <cstdint>

class Image // name start with capital letter
{
public:
    // constructor   -- has no return type
    Image(const std::uint32_t width, const std::uint32_t height);


    // destructor
    ~Image();

private: // The goal is to have private implementation details (such as data members) be private.
         // Only explicitly public API is made available to clients of the class.

    std::uint32_t m_width; // m_ prefix usually used for member variables (good practice)
    std::uint32_t m_height;




};
