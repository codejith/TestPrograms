#include <iostream>
#include <vector>
#include <cstdlib>

int main()
{
    std::vector<int> array;
    int limit, num;
    std::cin >> limit;
    for (int i = 0; i< limit; ++i)
    {
        std::cin >> num;
        array.push_back(num);
    }
    //std::sort(array.begin(), array.end()); 
    std::qsort(array, array.size(), sizeof(int), []()-> {
                                                     
                                                 });

    for (const auto& iter : array)
        std::cout << iter << std::endl;
    
}
