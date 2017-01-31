#include <iostream>
#include <thread>

class Test {
public:
    void set(int val_)
    {
        _x = val_;
        std::cout << "Value of x : " << _x  <<std::endl;
    }
    
private:
    int _x;
};

void setX(int val_, Test &ob)
{
    ob.set(val_);
}

int main()
{
    Test ob;
    std::thread t(setX, 25, std::ref(ob));
    //std::thread t (&Test::set, &ob, 5);
    t.join();
    std::cout << "Back to main thread" << std::endl;
    return 0;
}
