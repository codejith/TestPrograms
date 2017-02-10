#include <iostream>
#include <boost/signals2.hpp>
struct Test {
    void operator() () const
    {
        std::cout << "Hello world" << std::endl;
    }
};

int main()
{
    boost::signals2::signal<void ()> publisher;
    Test ob;
    publisher.connect(ob);

    publisher();

    return 0;
}
