#include <cstdint>
#include <vector>

using GrayscaleMatrix = std::vector<std::vector<std::uint8_t>>;

class Image
{
public:
    Image(const std::uint32_t width, const std::uint32_t height);
    ~Image();

    void save_image(const char *file_name) const;

    std::uint32_t get_width()const; // getter functions - class members can be read but not write
    std::uint32_t get_height()const;

    // we need to read and write the grey
    //1) to read need a setter:
    GrayscaleMatrix get_matrix() const;

    //2) now wee need to be able to write in the matrix.
    void set_pixels(std::uint32_t x, std::uint32_t y, std::uint8_t value);

private:
    std::uint32_t m_width;
    std::uint32_t m_height;
    GrayscaleMatrix m_matrix;

};
