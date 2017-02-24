#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <cstdlib>

int main()
{
    std::array<int, 12> array= {67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113};
    int limit, limit2 ;
    std::string input;
    int smaller=1000,diff = 0,primeNumber= 0;
    std::vector<std::string> stringBuf;
    std::cin >> limit;
    std::cin >> limit2;
    for(int i = 0; i < limit; ++i)
    {
        std::cin >> input;
        stringBuf.push_back(input);
    }

    for (const auto& iter : stringBuf )
    {
        input.assign("");
        for (int count = 0; count < iter.length(); ++count)
        {
            for (const auto& primeNo : array)
            {
                diff = std::abs(primeNo - iter[count]);
                if (smaller > diff)
                {
                    smaller = diff;
                    primeNumber = primeNo;
                }
            }
            smaller = 1000;
            input+=primeNumber;
        }
        std::cout << input << std::endl;
    }
    
    return 0;
}
