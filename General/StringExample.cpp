#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string val,copy;
    std::cout << "Enter the string : " << std::endl;
    std::getline(std::cin, val);
    std::cout << val << std::endl;
    std::transform(val.begin(), val.end(), val.begin(), ::tolower);
    copy.assign(val);
    std::reverse(copy.begin(), copy.end());

    if (copy ==  val)
    {
        std::cout << "Palindrome" << std::endl;
    }
    else
    {
        std::cout << "Not Palindrome" << std::endl;
    }
    
    //std::cout << val << std::endl;
    //std::cout << copy << std::endl;
    

    return 0;
}
