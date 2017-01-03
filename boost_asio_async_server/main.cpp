#include "Async_Tcp_Server.h"




int main()
{
    try
    {
        boost::asio::io_service io_service;
        Server server(io_service); 
        server.listen(8000);
        io_service.run();
    }
    catch(std::exception& ex)
    {
        std::cerr << ex.what() << std::endl;
    }
    return 0;
}
