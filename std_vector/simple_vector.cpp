#include <iostream>
#include <vector>

int main()
{
    std::vector<int> num,num2,num3;
    int limit, number, sum;
    std::cout << "Enter the limit : " << std::endl;
    std::cin>> limit;
    std::cout << "Enter "<< limit << " number : " << std::endl;
    for(int i=0; i < limit; ++i)
    {
        std::cin >> number;
        num.push_back(number);
    }
    
    std::cout<< "Num1" << std::endl;
    for(auto& v: num)
    {
        std::cout << v << std::endl;
    }
    
    std::cout << std::endl;
    num2.assign(num.begin(), num.end());
    std::cout<< "Num1" << std::endl;

    for(auto& v: num2)
    {
        std::cout << v << std::endl;
    }
    
    std::cout << std::endl;
    num3.assign(7, 4); // count and value
    std::cout<< "Num3" << std::endl;
    for(auto& v: num3)
    {
        std::cout << v << std::endl;
    }
    
    std::cout << std::endl;
    num3.assign({4,5,6}); // Initialization list
    std::cout<< "Num3 again" << std::endl;
    for(auto& v: num3)
    {
        std::cout << v << std::endl;
    }
    
    std::cout << "Capacity Num3: " << num3.capacity() << std::endl;
    std::cout << "Size num3 :  " << num3.size() << std::endl;
    return 0;
}
