#ifndef CONNECT
#define CONNECT

#include <iostream>
#include <string>
#include <boost/bind.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/enable_shared_from_this.hpp>
#include <boost/asio.hpp>
#include <boost/asio/basic_socket_acceptor.hpp>

class TCP_Connection: public boost::enable_shared_from_this<TCP_Connection> {
public:
    typedef boost::shared_ptr<TCP_Connection> pointer;

   

    static pointer create(boost::asio::io_service& io_service_)
    {
        return pointer(new TCP_Connection(io_service_));
    }

    boost::asio::ip::tcp::socket& socket()
    {
        
        return _socket;
    }

    void start();

    ~TCP_Connection()
    {
        _socket.close();
    }
private:
     TCP_Connection(boost::asio::io_service& io_service):_socket(io_service)
    {
        //std::cout << "Socket Value : " << _socket << std::endl; 
    }
    void handle_write(const boost::system::error_code& error,
                          std::size_t bytes_transferred)
  {
  }
    
    std::string                       _msg;
    boost::asio::ip::tcp::socket      _socket;
    
};
#endif
