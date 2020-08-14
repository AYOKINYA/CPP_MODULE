/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:05:13 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:05:14 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{}

Ice::Ice(Ice const &copy) : AMateria("ice")
{
    this->_xp = copy._xp;
}

Ice& Ice::operator=(Ice const &Ice)
{
    if (this == &Ice)
        return (*this);
    AMateria::operator=(Ice);
    return (*this);
}   

Ice::~Ice()
{}


AMateria* Ice::clone() const
{
    Ice* copy = new Ice(*this);
    return (copy);
}

void Ice::use(ICharacter& target)
{
    AMateria::use(target);
    std::cout <<  "* shoots an ice bolt at ";
    std::cout << target.getName() << " *" << std::endl;
}