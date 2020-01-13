
#include "Logger.hpp"

Logger::Logger(void) {
    this->_logFile = "LoggerFile";
}

Logger::Logger(std::string loggerFile) : _logFile(loggerFile) {
    std::cout << "Create: " << _logFile << std::endl;
}

Logger::~Logger(void) {
    std::cout << "Delete File" << std::endl;
}

void Logger::logToConsole(std::string const & message) {
    std::cout << message << std::endl;

}

void Logger::logToFile(std::string const & message) {
    std::ofstream outPutFile(_logFile);
    outPutFile << message;
}

std::string Logger::makeLogEntry(std::string message) const {
  time_t rawtime;
  struct tm * timeinfo;
  char buffer[80];

  time (&rawtime);
  timeinfo = localtime(&rawtime);

  strftime(buffer,sizeof(buffer),"%d-%m-%Y %H:%M:%S",timeinfo);
  std::string str(buffer);
  std::string newMessage = "[" + str + "] " + message;
  return newMessage;
}

void Logger::log(std::string const & dest, std::string const & message) {

    std::string newMessage = makeLogEntry(message);
    bool destMatch = false;
	void (Logger::*log[2]) (std::string const & message) = {
		&Logger::logToConsole,
		&Logger::logToFile,
	};

    std::string destName[2] = {
        "logToConsole", 
        "logToFile"
    };
    
    	for (int i = 0; i < 2; i++) {
		if (destName[i] == dest) {
			(this->*(log[i]))(message);
			destMatch = true;
		}
	}

	if (destMatch == false) {
		std::cout << "Where is ur ATTACK to " << message << "???" << std::endl;
	}
}