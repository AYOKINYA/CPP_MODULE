#include "Logger.hpp"

Logger::Logger(std::string const &filename)
{
	writefile.open(filename, std::fstream::out | std::fstream::app);
}

Logger::~Logger()
{
	if (writefile.is_open())
		writefile.close();
}

void	Logger::logToConsole(std::string const &str)
{
	std::string res;

	res = Logger::makeLogEntry(str);
	std::cout << res << std::endl;
}

void	Logger::logToFile(std::string const &str)
{
	std::string res;
	
	res = Logger::makeLogEntry(str);
	if (writefile.is_open())
		writefile << res << std::endl;
	else
	{
		std::cout << "fail to open a file." << std::endl;
		exit(1);
	}
}

std::string	Logger::makeLogEntry(std::string const &str)
{
	std::string res = "";
	time_t 		_tm = time(0);
	struct 	tm 	t_curr_time = *localtime(&_tm);
	char		buf[80];

	strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &t_curr_time);
	res += "[";
	res += buf;
	res += "] ";
	res += str;

	return (res);
}

void	Logger::log(std::string const & dest, std::string const & message)
{
	std::string	str;
	int 		key;

	void (Logger::* const logger_functions[2])(std::string const &value) = {
		&Logger::logToConsole,
		&Logger::logToFile
	};

	key = -1;
	if (dest == "logToConsole")
		key = 0;
	else if (dest == "logToFile")
		key = 1;
	else
		throw ("Not a proper logger function.");
	(this->*logger_functions[key])(message);
}
