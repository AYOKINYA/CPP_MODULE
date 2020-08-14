/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:11:46 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:11:47 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int main(void)
{
	Logger logger("LOG");

	try
	{
		logger.log("logToConsole", "============");
		logger.log("logToConsole", "hello");
		logger.log("logToFile", "hello");
		logger.log("logToFile", "1");
		logger.log("logToFile", "2");
		logger.log("logToFile", "3");
		logger.log("logToFile", "bye");
		logger.log("logToConsole", "============");
		logger.log("XXXXXXXXXX", "EXTRA?");
	}
	catch (const char *e)
	{
		std::cerr << "Logger exceptions : " << e << std::endl;
	}
	return (0);
}