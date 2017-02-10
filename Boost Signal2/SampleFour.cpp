#include <iostream>
#include <boost/signals2.hpp>

struct Test {
     void sum(int num1, int num2)
    {
        std::cout << "Sum  : " << (num1+num2)  <<std::endl;
    }

    static void diff(int num1, int num2)
    {
        std::cout << "Diff  : " << (num1-num2)  <<std::endl;
    }
};

int main()
{
    boost::signals2::signal<void (int, int)> sig;
    Test ob;
    //sig.connect(ob.sum);
    sig.connect(&Test::diff);
    sig(5, 6);
    



    return 0;
}
