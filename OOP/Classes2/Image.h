#include <cstdint>
#include <vector>

using GrayscaleMatrix = std::vector<std::vector<std::uint8_t>>;

class Image
{
public:
    // constructor
    Image(const std::uint32_t width, const std::uint32_t height);


    // destructor
    ~Image();

private:
    std::uint32_t m_width;
    std::uint32_t m_height;
    GrayscaleMatrix m_matrix; // you cant initialize m_matrix before width or height as it uses both width and height
    // should always think, in which sequence, the class attributes must be defined


};
