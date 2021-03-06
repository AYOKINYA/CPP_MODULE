/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 19:46:43 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 19:46:44 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(): Victim()
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(std::string name) : Victim(name)
{
	this->name = name;
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &copy) : Victim(copy)
{
	*this = copy;
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon& Peon::operator= (const Peon &peon)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &peon)
		return (*this);
	Victim::operator=(peon);
	this->name = peon.name;
	return (*this);
}

std::ostream& operator<< (std::ostream& out, const Peon &peon)
{
    out << "I'm " << peon.get_name()  << " and I like otters!" << std::endl;
    return (out);
}

void	Peon::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a pink pony!" << std::endl;
}

std::string	Peon::get_name(void) const
{
    return (this->name);
}