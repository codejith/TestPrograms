#include <iostream>
enum class Color {
    YELLOW,
    RED,
    ORANGE,
    BLACK,
    BLUE,
};

int main()
{
    Color color =  Color::BLACK;
    std::cout << "Enum value : " << static_cast<int>(color)  <<std::endl;
    return 0;
}
