/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 16:45:01 by jkang             #+#    #+#             */
/*   Updated: 2020/07/30 17:35:51 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	this->count = 0;
}

Phonebook::~Phonebook()
{}

bool	Phonebook::validate_search_input(std::string idx)
{
	if (std::cin.eof())
	{
		std::cin.clear();
		exit(0);
	}
	else if (idx.length() == 0)
		std::cout << "Please type an index." << std::endl;
	else if (idx.length() != 1)
		std::cout << "It's not a proper input." << std::endl;
	else if (idx[0] - '0' < 0 || idx[0] - '0' > this->count - 1)
		std::cout << "It's not a proper index." << std::endl;
	else
		return (0);
	return (1);
}

void	Phonebook::current_status(void)
{
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int j = 0; j < this->count; ++j)
		this->contacts[j].print_overview(j);
	std::cout << "|-------------------------------------------|" << std::endl;
}

void	Phonebook::search_contact(void)
{
	size_t		i;
	std::string	idx;
	
	if (this->count == 0)
	{
		std::cout << "None. Please add a contact." << std::endl;
		return ;
	}
	current_status();
	while (1)
	{
		std::getline(std::cin, idx);
		if (!validate_search_input(idx))
		{
			i = std::stoi(idx);
			std::cout << "INDEX : " << i << std::endl; 
			this->contacts[i].print_item();
			std::cout << "====SEARCH DONE!====" << std::endl;
			break ;
		}
	}
}

void	Phonebook::add_contact(void)
{
	std::string	input;

	if (this->count == 8)
	{
		std::cout << "Unfortunately, contact storage is full." << std::endl;
		return ;
	}
	this->contacts[this->count].set_items();
	++this->count;
	std::cout << "====ADD SUCCESSFULLY!====" << std::endl;
}
