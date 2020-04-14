#include <boost/asio.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <iostream>

int
main( )
{
    boost::asio::io_service io;
    boost::asio::deadline_timer timer( io, boost::posix_time::seconds( 2 ) );
    timer.wait( );
    std::cout << "Hello, world!" << std::endl;

    return 0;
}