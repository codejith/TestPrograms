#include <iostream>
#include <boost/signals2.hpp>

struct Hello {
    void operator() () const
    {
        std::cout << "Hello " << std::endl;
    }
};

struct World {
    void operator () ()  const
    {
        std::cout << "World" << std::endl;
    }
     
};

struct Test {
    void operator() () const
    {
        std::cout << "Finally Test been called" << std::endl;
    }
};

int main()
{
    boost::signals2::signal<void ()> sig;
    Hello ob;
    World ob1;
    Test ob2;

    sig.connect(0, ob);
    sig.connect(ob2, boost::signals2::at_front);
    sig.connect(1, ob1);
    
    

    sig();

    return 0;
}
