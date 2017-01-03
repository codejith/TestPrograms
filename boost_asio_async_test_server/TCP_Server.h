#ifndef TCP_SERVER
#define TCP_SERVER
#include <iostream>
#include <boost/asio.hpp>
#include "TCP_Connection.h"
#include <boost/asio/placeholders.hpp>
class TCP_Server {
public:
    TCP_Server(boost::asio::io_service& io_service_, unsigned portNo_):_acceptor(io_service_, boost::asio::ip::tcp::endpoint(boost::asio::ip::tcp::v4(),portNo_))
    { 
        
        start_accept();
    }


private:
    boost::asio::ip::tcp::acceptor                _acceptor;

    void start_accept()
    {
        
          TCP_Connection::pointer new_connection = TCP_Connection::create(_acceptor.get_io_service());
        // TCP_Connection::pointer new_connection(new TCP_Connection(_acceptor.get_io_service()));
        std::cout << "pointer count : " << new_connection.use_count() << std::endl;
        auto handler = boost::bind(&TCP_Server::handle_accept,this,new_connection,boost::asio::placeholders::error);
        _acceptor.async_accept(new_connection->socket(),handler);
        
    }
    
    void handle_accept(TCP_Connection::pointer new_connection, const boost::system::error_code& error)
    {    
        if(!error)
        {
            std::cout << "new_connection : " << std::endl;
            new_connection->start();
            start_accept();
            
        }
        else
        {
            std::cerr << "Error : " << error << std::endl;
        }
        //start_accept();
        
    }
    
};


#endif
