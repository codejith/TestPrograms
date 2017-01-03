#include "TCP_Server.h"
#include "TCP_Connection.h"

int main()
{
    try
    {
        boost::asio::io_service io_service;
        TCP_Server server(io_service, 8000);
        io_service.run();
    }
    catch(std::exception& ex)
    {
        std::cerr << ex.what() << std::endl;
    }
    return 0;
}
