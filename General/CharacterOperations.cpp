#include <iostream>
#include <limits>
#include <string>

int main()
{
    char *name;
    int limit;
    std::cin >> limit;
    name = new char[limit];
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.getline(name, limit, '\0');
    std::getline(std::cin, name);
    std::cout << "Name : " << name << std::endl;
    return 0;
}
