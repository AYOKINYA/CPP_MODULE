/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exec_input.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 16:51:23 by jkang             #+#    #+#             */
/*   Updated: 2020/07/30 17:04:17 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Exec_input.hpp"

void	exec_input(void)
{
	Phonebook	phonebook;
	std::string	input;

	while (1)
	{
		std::cout << "commands are ADD, SEARCH, annd EXIT" << std::endl;
		std::getline(std::cin, input);
		if (input.compare("ADD") == 0)
			phonebook.add_contact();
		else if (input.compare("SEARCH") == 0)
			phonebook.search_contact();
		else if (input.compare("EXIT") == 0)
		{
			std::cout << "====GOOD BYE====" << std::endl;
			break ;
		}
		else if (std::cin.eof())
			break ;
		else if (input.length() == 0)
			continue ;
		else
			std::cout << "command not found." << std::endl;
	}
}

int main(void)
{
	exec_input();
	return (0);
}