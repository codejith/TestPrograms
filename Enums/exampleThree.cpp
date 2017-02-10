#include <iostream>
enum Color {
    YELLOW,
    RED,
};

enum Number {
    ONE,
    TWO,
};

int main()
{
    Color color = YELLOW;
    Number num =  ONE;

    if(color==num)
    {
        std::cout << "classic enumeration issue" << std::endl;
    }
    else
    {
        std::cout << "Oh lucky, just escaped !!!" << std::endl;
    }

    return 0;
}
