#include <iostream>
#include <cmath>
int main()
{
    int limit, number, count = 0, temp = 0, sum = 0, j;
    std::cin >> limit;
    for (int i = limit; i > 0; --i)
    {
        std::cin >> number;
        sum = 0;
        j = 1;
        temp = number/(std::pow(5, j));
        while(temp > 0)
        {
            sum+=temp;
            temp = 0;
            ++j;
            temp = number/(std::pow(5, j));
        }
        std::cout << sum << std::endl;       
    }

    return 0;
}
