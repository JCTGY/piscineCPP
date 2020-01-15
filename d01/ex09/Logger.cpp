/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 16:12:22 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/14 22:56:48 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger(void) {
    this->_logFile = "LoggerFile";
	std::cout << "Create default file" << std::endl;
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
    std::ofstream outPutFile(_logFile, std::ios_base::app);
	if (!outPutFile) {
		std::cout << "Error: open / create file fail" << std::endl;
		return ;
	}
    outPutFile << message << std::endl;
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
	void (Logger::*logto[2]) (std::string const & message) = {
		&Logger::logToConsole,
		&Logger::logToFile,
	};

    std::string destName[2] = {
        "logToConsole", 
        "logToFile"
    };
    
    	for (int i = 0; i < 2; i++) {
		if (destName[i] == dest) {
			(this->*(logto[i]))(newMessage);
			destMatch = true;
		}
	}

	if (destMatch == false) {
		std::cout << "dest property: logToConsole / logToFile" << std::endl;
	}
}
