/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 16:47:00 by jkang             #+#    #+#             */
/*   Updated: 2020/08/16 16:05:13 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	this->prints[0] = "first name";
	this->prints[1] = "last name";
	this->prints[2] = "nickname";
	this->prints[3] = "login";
	this->prints[4] = "postal address";
	this->prints[5] = "email address";
	this->prints[6] = "phonebook number";
	this->prints[7] = "birthday date";
	this->prints[8] = "favorite meal";
	this->prints[9] = "underwear color";
	this->prints[10] = "darkest secret";
}

Contact::~Contact()
{}

void		Contact::set_items(void)
{
	std::string	input;
	
	for (int i = 0; i < 11; ++i)
	{
		if (std::cin.eof())
		{
			std::cin.clear();
			std::cout << std::endl;
			exit(0);
		}
		std::cout << this->prints[i] << " :";
		std::getline(std::cin, this->items[i]);
	}
}

void		Contact::print_item(void)
{
	std::string	input;
	
	for (int i = 0; i < 11; ++i)
		std::cout << this->prints[i] << " :" << this->items[i] << std::endl;
}

void		Contact::print_overview(int idx)
{
	std::string	input;

	std::cout << "|" << std::setw(10) << idx;
	for (int i = 0; i < 3; ++i)
	{
		std::cout << "|";
		if (this->items[i].length() <= 10)
			std::cout << std::setw(10) << this->items[i];
		else
			std::cout << this->items[i].substr(0, 9) << ".";
	}
	std::cout << "|" << std::endl;
}
