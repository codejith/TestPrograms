#include <iostream>
int main()
{
    short result = 0;
    int count, num, div;
    std::cin>> count >> div;
    while(count>0)
    {
        std::cin >> num;
        if (num % div == 0)
            ++result;
        --count;
    }
    std::cout << result << std::endl;

    return 0;
}
