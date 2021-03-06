/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 19:46:35 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 19:46:41 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : name(name), title(title)
{
	std::cout << this->name << ", " << this->title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->name << ", " << this->title;
	std::cout << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &copy) : name(copy.name), title(copy.title)
{
	*this = copy;
	std::cout << this->name << ", " << this->title << ", is born!" << std::endl;
}

Sorcerer& Sorcerer::operator= (const Sorcerer &sorcerer)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &sorcerer)
		return (*this);
	this->name = sorcerer.name;
	this->title = sorcerer.title;

	return (*this);
}

std::ostream& operator<< (std::ostream& out, const Sorcerer& sorcerer)
{
	out << "I am " << sorcerer.get_name() << ", "; 
	out << sorcerer.get_title() << ", and I like ponies!" << std::endl;
	return (out);
}

std::string	Sorcerer::get_name(void) const
{
	return (this->name);
}

std::string	Sorcerer::get_title(void) const
{
	return (this->title);
}

void	Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}
