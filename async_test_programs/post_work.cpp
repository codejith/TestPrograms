#include <iostream>
#include <thread>
#include <boost/asio.hpp>


int main()
{

    boost::asio::io_service service;
    service.post([]()
                 {
                     std::cout << "Hello World" << std::endl;
                 });
    service.post([]()
                 {
                     std::cout << "Hello sam" << std::endl;
                 });

    std::thread mythread([&service]()
                         {
                             service.run();
                         });

    mythread.join();
    std::cout << "Done " <<  std::endl; 
    return 0;
}
