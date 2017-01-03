#include "TCP_Connection.h"
#include <ctime>


std::string make_daytime_string()
{
    std::time_t currentTime_ =  std::time(0);
    return std::ctime(&currentTime_);
}


void TCP_Connection::start()
{
    _msg = make_daytime_string();
    /* boost::asio::write(_socket, boost::asio::buffer(_msg),
                       boost::bind(&TCP_Connection::handle_write,
                       shared_from_this(),
                       boost::asio::placeholders::error,
                       boost::asio::placeholders::bytes_transferred)); */

    boost::asio::async_write(_socket, boost::asio::buffer(_msg),
        boost::bind(&TCP_Connection::handle_write, shared_from_this(),
          boost::asio::placeholders::error,
          boost::asio::placeholders::bytes_transferred));
    
}



