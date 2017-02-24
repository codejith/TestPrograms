#include <iostream>

int test()
{
    //return (true? 1 : 0);
    //true? return 1 : return 0;
}

int main()
{
    int a = 0;
    int b = 0,c;
    //(false? i : j) = 12;
    /* 
     * (true? i : j ) = 11;
     * std::cout << i << std::endl;
     * std::cout << j << std::endl;
     */
    //std::cout << "Test Return value : " << test() << std::endl;
    // std::cout << (true? 1 : '6') << " " << (false?  1 : '5') << std::endl;
    c = true ? ++a : ++b;
    std::cout << a  << std::endl;
    std::cout << b  << std::endl;
    std::cout << c  << std::endl;
    return 0;
}
