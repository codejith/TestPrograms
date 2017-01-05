#include <iostream>
#include <boost/asio.hpp>
#include <boost/chrono.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>

int main()
{
    boost::asio::io_service service;
    boost::asio::deadline_timer timer(service, boost::posix_time::seconds(5));
    timer.async_wait([] (const boost::system::error_code& )
                     {
                         std::cout << boost::chrono::system_clock::now() << "Timer expired" << std::endl;
                     });
    std::cout << boost::chrono::system_clock::now() << " : calling run" << std::endl;
    std::cout << boost::chrono::system_clock::now() << " : calling run" << std::endl;
    std::cout << boost::chrono::system_clock::now() << " : calling run" << std::endl;


    
    service.run();

    std::cout << boost::chrono::system_clock::now() << " : done" << std::endl;
    std::cout << boost::chrono::system_clock::now() << " : done" << std::endl;
    std::cout << boost::chrono::system_clock::now() << " : done" << std::endl;


    return 0;
}
