#include <iostream>
#include <array>

int main()
{
    std::array<int, 3> myArray = {1, 2, 3};
    for (const auto& iter : myArray)
    {
        std::cout << iter << std::endl;
    }

    return 0;
}
