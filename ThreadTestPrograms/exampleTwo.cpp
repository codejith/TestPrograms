#include <iostream>
#include <thread>
#include <string>
#include <chrono>

void foo(std::string message_, unsigned num_ )
{
    std::cout  << "Message : " << message_ << std::endl;
    std::cout  << "Num : " << num_ << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(5));
}

int main()
{
    std::thread myThread(foo, "Hello World", 12);
    myThread.join();
    std::cout  << "Back to Main" << std::endl;
    return 0;
}
