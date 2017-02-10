#include <iostream>
#include <string>
enum Numbers {
    ONE,
    TWO,
    THREE,
    FOUR,
    FIVE,
};

int main()
{
    int num;
    std::cout << "Enter a number less than 5 : " << std::endl;
    std::cin >> num;
    Numbers ob = static_cast<Numbers>(num);
    std::cout << "Value : " << ob << std::endl;
    std::cout << "Size of Number : " <<  sizeof(Numbers) << std::endl;
    std::cout << "Size of Char : " << sizeof(char) << std::endl;
    std::cout << "Size of Int : " << sizeof(int) << std::endl;
    std::cout << "Size of Unsigned : " << sizeof(unsigned) << std::endl;
    std::cout << "Size of Float : " << sizeof(float) << std::endl;
    std::cout << "Size of double : " << sizeof(double) << std::endl;
    std::cout << "Size of String : " << sizeof(std::string) << std::endl;
    return 0;
}
