/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:11:44 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:11:44 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP
# include <iostream>
# include <string>
# include <fstream>
# include <ctime>

class Logger{
    private:
			std::string		makeLogEntry(std::string const &str);
			void			logToConsole(std::string const &str);
			void			logToFile(std::string const &str);

			std::ofstream	writefile;
    public:
			Logger(std::string const &filename);
			~Logger();
			void			log(std::string const & dest, std::string const & message);
};

#endif