#include <iostream>
class NormalFunctionOverloading {
public:
    NormalFunctionOverloading(int value_): _number(value_)
    {
        
    }
    int getNumber();
private:
    int              _number;
};

int NormalFunctionOverloading::getNumber()
{
    return _number;
}

NormalFunctionOverloading operator+ (NormalFunctionOverloading& objectOne, NormalFunctionOverloading& objectTwo)
{
    return NormalFunctionOverloading(objectOne.getNumber() + objectTwo.getNumber());
}

int main()
{
    NormalFunctionOverloading objectOne(1);
    NormalFunctionOverloading objectTwo(2);
    NormalFunctionOverloading objectThree = objectOne + objectTwo;
    std::cout << objectThree.getNumber() << std::endl;
    return 0;
}
