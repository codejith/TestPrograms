#include <iostream>

template<typename T>
T max(T num1, T num2)
{
    return (num1>num2)? num1 : num2;
}

int main()
{
    int i = max(2,3);
    std::cout << "Max num : " << i << std::endl;
    double d = max(3.1,2.5);
    std::cout << "Max num : " << d << std::endl;

    return 0;
}
