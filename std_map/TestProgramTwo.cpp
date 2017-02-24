#include <iostream>
#include <map>

int main()
{
    std::map<char, int> char_to_num_map;
    char_to_num_map['a'] = 1;
    char_to_num_map['c'] = 3;
    char_to_num_map['d'] = 4;
    char_to_num_map['e'] = 5;
    char_to_num_map.insert(std::pair<char, int>('b', 2));
    //char_to_num_map.insert(std::pair<char, int>('b', 10));
    //   char_to_num_map.find('c')->
    
    for (const auto &iter : char_to_num_map)
    {
        
        std::cout << iter.first << " ==> " << iter.second << std::endl; 
    }

    return 0;
}
