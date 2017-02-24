#include <iostream>
#include <vector>

int main()
{
    int num, temp;
    std::vector<int> numberSet;
    std::cin >> num;
    while( num != 42 )
    {
        numberSet.push_back(num);
        std::cin >> num;
    }

    for(const auto& iter : numberSet)
    {
        std::cout << iter << std::endl;
    }
        
    return 0;
}
