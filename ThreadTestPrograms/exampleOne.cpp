#include <iostream>
#include <thread>

void foo()
{
    std::cout  << "Hello world" << std::endl;
}

int main()
{
    std::thread myThread(foo);
    myThread.join();

    return 0;
}
