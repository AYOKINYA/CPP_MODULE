/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:11:25 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:11:26 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int ft_error(std::string msg, int ret)
{
	std::cout << msg << std::endl;
	return (ret);
}

int	execute_sed(std::ifstream &readfile, char **argv)
{
	std::string		buf;
	std::ofstream	writefile;
	std::string		new_file_name;
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	std::size_t		found;

	new_file_name = std::string(argv[1]) + std::string(".replace");
	writefile.open(new_file_name);
	if (!writefile.is_open())
		return (0);
	while (std::getline(readfile, buf))
	{
		found = buf.find(s1);
		if (found != std::string::npos)
			buf.replace(found, s1.length(), s2);
		writefile << buf;
		if (!readfile.eof()) // while문 조건을 get_next_line으로 바꾸고 readfile.eof일 때 new line 안 들어가게!
			writefile << std::endl;
	}
	writefile.close();
	return (1);
}

int main(int argc, char **argv)
{
	std::ifstream	readfile;

	if (argc != 4)
	    return (ft_error("argc has to be 4.", -1));
	readfile.open(argv[1]);
	if (readfile.is_open())
	{
		if (!execute_sed(readfile, argv))
			return (ft_error("The file to write to isn't opened.", -1));
	}
	else
		return (ft_error("The file to read isn't opened.", -1));
	readfile.close();
	return (0);
}