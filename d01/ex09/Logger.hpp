
#ifndef LOGGER_HPP
# define LOGGER_HPP
#include <iostream>
#include <string>
#include <fstream>

class Logger 
{
    private:
        std::string logFile;
        void logToConsole(std::string message);
        void logToFile(std::string message);
        std::string makeLogEntry(std::string message) const;
    public:
        void log(std::string const & dest, std::string const & message);
};

#endif