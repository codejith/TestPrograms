#include <iostream>
class InsertionSort {
public:
    void setElement();
    void sort();
    void getResult();
private:
    int _array[10], _limit = 0;
};

void InsertionSort::setElement()
{
    
    
    std::cin >> _limit;
    
    for(int i = 0; i < _limit; ++i)
    {
        std::cin >> _array[i];
    }   
}

void InsertionSort::sort()
{
    for(int i = 0; i < _limit; ++i )
    {
        for(int j = 0; j <= i; ++j)
        {
            if (_array[i] < _array[j])
            {
                _array[i] = _array[i] + _array[j];
                _array[j] = _array[i] - _array[j];
                _array[i] = _array[i] - _array[j];
            }
        }
    }
}

void InsertionSort::getResult()
{
    std::cout << "Elements :" << std::endl;
    for(int i = 0 ; i < _limit; ++i)
    {
        std::cout << " " << _array[i];  
    }
    std::cout << std::endl;
}

int main()
{
    InsertionSort  ob;
    ob.setElement();
    ob.getResult();
    ob.sort();
    ob.getResult();

    return 0;
}
