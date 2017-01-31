#include <iostream>

template<typename T>
const T& max(T &x, T &y)
{
    return (x>y)? x : y;
}


class Cent {
public:
    Cent(int cent_): _cent(cent_) {}
    int getCent()
    {
        return _cent;
    }
    friend bool operator>(Cent &c1, Cent &c2)
    {
        return (c1._cent > c2._cent);
    }
private:
    int                                          _cent;
    
};


int main()
{
    Cent ob1(5);
    Cent ob2(3);
    Cent bigger = max(ob1, ob2);
    std::cout  << bigger.getCent() << std::endl;

    return 0;
}
