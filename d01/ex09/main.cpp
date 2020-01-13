
#include "Logger.hpp"

int main(void) 
{
    Logger loggre = Logger("hello");
    loggre.log("logToConsole", "walotp");
    loggre.log("logToFile", "healrj");

    return 0;
}
