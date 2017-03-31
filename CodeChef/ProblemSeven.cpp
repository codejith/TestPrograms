#include <iostream>
int main()
{
    int limit;
    int num;
    std::cin >> limit;
    while (limit--)
    {
        std::cin >> num;
        std::cout << ((num/2)+1) << std::endl;
    }

    return 0;
}
