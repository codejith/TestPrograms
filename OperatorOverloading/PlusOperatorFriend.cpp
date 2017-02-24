#include <iostream>

class PlusOperatorFriend {

public:
    PlusOperatorFriend(int value_ ): _value(value_)
    {
        
    }
    int getValue();
    friend PlusOperatorFriend operator+ (PlusOperatorFriend& objectOne, PlusOperatorFriend& objectTwo);
    
private:
    int                 _value;
    
};

int PlusOperatorFriend::getValue()
{
    return _value;
}

PlusOperatorFriend operator+ (PlusOperatorFriend& objectOne, PlusOperatorFriend& objectTwo)
{
    return PlusOperatorFriend(objectOne._value + objectTwo._value);
}

int main()
{
    PlusOperatorFriend objectOne(1);
    PlusOperatorFriend objectTwo(2);
    PlusOperatorFriend objectThree = objectOne + objectTwo;
    std::cout << "Sum : " << objectThree.getValue() << std::endl;
    return 0;
}
