#include <iostream>
#include <boost/signals2.hpp>

struct Hello {
    void operator() () const
    {
        std::cout << "Hello ";
    }
};

struct World {
    void operator() () const
    {
        std::cout << "World" << std::endl;
    }
};

int main()
{
    boost::signals2::signal<void ()> sig;
    Hello ob1;
    World ob2;
    sig.connect(ob1);
    sig.connect(ob2);

    sig();
    return 0;
}
