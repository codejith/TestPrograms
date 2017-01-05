#include <iostream>
#include <thread>
#include <ctime>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/chrono.hpp>
#include <boost/asio.hpp>


void timer_expired(std::string id)
{
    std::cout <<id << " entering time : " << boost::posix_time::second_clock::local_time() << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout <<id << " entering time : " << boost::posix_time::second_clock::local_time()  << std::endl;
    
}


int main()
{

    boost::asio::io_service service;
    boost::asio::deadline_timer timer1(service, boost::posix_time::seconds(5));
    boost::asio::deadline_timer timer2(service, boost::posix_time::seconds(5));

    timer1.async_wait([](const boost::system::error_code&)
                      {
                          //std::cout << boost::chrono::system_clock::now() << std::endl;
                          timer_expired("timer1");
                      });

    timer2.async_wait([] (const boost::system::error_code&)
                      {
                          //std::cout << boost::chrono::system_clock::now() << std::endl;
                          timer_expired("timer2");
                      });
    std::thread mythread1([&service]()
                         {
                             service.run();
                         });
    /* std::thread  mythread2([&service] ()
                           {
                               service.run();
                           });
    */
    mythread1.join();
    //mythread2.join();

    std::cout << "Done." << std::endl;

    
    return 0;
}
