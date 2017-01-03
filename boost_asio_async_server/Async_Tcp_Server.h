#ifndef SERVER
#define SERVER

#include <iostream>
#include <string>
#include <boost/asio.hpp>
#include <boost/bind.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/enable_shared_from_this.hpp>

struct Connection: public boost::enable_shared_from_this<Connection> {
    typedef boost::shared_ptr<Connection> pointer;
    boost::asio::ip::tcp::socket _socket;

    void start();
    void handle_write(const boost::system::error_code &error, std::size_t bytes_transfered);
    // Constructor Section

    Connection(boost::asio::io_service& ioService):_socket(ioService)
    {
      
    }
    
};


void Connection :: start()
{
    std::string msg = "Server Msg";
    auto handler = boost::bind(&Connection::handle_write, shared_from_this(),boost::asio::placeholders::error, boost::asio::placeholders::bytes_transferred);
        boost::asio::async_write(_socket, boost::asio::buffer(msg), handler);
}

void Connection :: handle_write(const boost::system::error_code &error, std::size_t bytes_transfered)
{
    if(!error)
    {
        std::cout << "Send successfull" << std::endl;
    }
}



class Server {
public:
    Server(boost::asio::io_service& ioService): _acceptor(ioService){}
    void listen(unsigned port_);
    void start_accept();
    void handle_accept(Connection::pointer new_connection, const boost::system::error_code  &error);

private:
    boost::asio::ip::tcp::acceptor                _acceptor;

    
};

void Server :: listen(unsigned port_)
{
    auto endpoint = boost::asio::ip::tcp::endpoint(boost::asio::ip::tcp::v4(),port_);
    _acceptor.open(endpoint.protocol());
    _acceptor.set_option(boost::asio::ip::tcp::acceptor::reuse_address(true));
    _acceptor.bind(endpoint);
    _acceptor.listen();
    start_accept();
}

void Server :: start_accept()
{
    
    Connection::pointer new_connection =  Connection::pointer(new Connection(_acceptor.get_io_service()));
    auto handler =  boost::bind(&Server::handle_accept, this, new_connection, boost::asio::placeholders::error);
    _acceptor.async_accept(new_connection->_socket, handler);
}

void Server :: handle_accept(Connection::pointer new_connection, const boost::system::error_code &error)
{
    
    if(!error)
    {
        //Success Block
        std::cout << "Error Value : " << error << std::endl;
        new_connection->start();
        
    }
    else
    {
        std::cerr << "Error Code : " << error << std::endl; 
    }

    start_accept();
}

#endif
