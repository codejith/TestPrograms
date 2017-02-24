#include <iostream>

class MinusOperator {
public:
    MinusOperator(int value_): _value(value_)
    {
        
    }

    int getValue();
    friend MinusOperator operator- (MinusOperator& objectOne, MinusOperator& objectTwo);

private:
    int                _value;
};

int MinusOperator::getValue()
{
    return _value;
}

MinusOperator operator- (MinusOperator& objectOne, MinusOperator& objectTwo)
{
    return MinusOperator(objectOne._value - objectTwo._value);
}

int main()
{
    MinusOperator objectOne(5);
    MinusOperator objectTwo(2);
    MinusOperator objectThree = objectOne - objectTwo;
    std::cout << "Difference : " << objectThree.getValue() << std::endl;
    return 0;
}
