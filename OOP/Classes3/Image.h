#include <cstdint>
#include <vector>

using GrayscaleMatrix = std::vector<std::vector<std::uint8_t>>;

class Image
{
public:
    Image(const std::uint32_t width, const std::uint32_t height);
    ~Image();

    void save_image(const char *file_name) const; // method in the class that dont change member varialbles -> const methods
    // you dont need to define const, but if you define, its good- helps the compiler to optimize in release mode
    // The const means that the method promises not to alter any members of the class.
private:
    std::uint32_t m_width;
    std::uint32_t m_height;
    GrayscaleMatrix m_matrix; // you cant initialize m_matrix before width or height as it uses both width and height
    // should always think, in which sequence, the class attributes must be defined


};
