
#ifndef LOGGER_HPP
# define LOGGER_HPP
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>

class Logger 
{
    private:
        std::string _logFile;
        void logToConsole( std::string const  & message);
        void logToFile(std::string const & message);
        std::string makeLogEntry(std::string message) const;
    public:
        Logger(void);
        Logger(std::string loggerFile);
        ~Logger(void);
        void log(std::string const & dest, std::string const & message);
};

#endif