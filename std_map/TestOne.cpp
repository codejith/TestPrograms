#include <iostream>
#include <map>


int main()
{
    std::map<char, int> myMap;
    myMap['a'] = 1;
    myMap['b'] = 2;
    myMap['c'] = 3;
    myMap['d'] = 4;
    myMap['e'] = 5;
    myMap['f'] = 6;

    //auto iter = myMap.find('b');
    // myMap.erase(iter);
    std::cout << myMap.size() << std::endl;
    auto iter = myMap.begin();
    while(iter!=myMap.end())
    {
        if(iter->first=='a')
        {
            iter = myMap.erase(iter);
        }
        else
        {
            std::cout << iter->first << " ==> " << iter->second << std::endl;
            ++iter;
        }   
    }
    /* for (auto it = myMap.begin(); it!=myMap.end(); ++it)
    {
        
         if (it->first == 'b')
        {
            it = myMap.erase(it);
            // --it;
        }
        
        
            std::cout << it->first  <<" ==> " << it->second << std::endl;
        
        }*/
    /*
    std::cout << "a ==> " << myMap.find('a')->second << std::endl;
    std::cout << "b ==> " << myMap.find('b')->second << std::endl;
    std::cout << "c ==> " << myMap.find('c')->second << std::endl;
    */
    return 0;
}
