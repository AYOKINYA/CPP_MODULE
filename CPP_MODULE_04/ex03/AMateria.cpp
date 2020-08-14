/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:03:57 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:03:58 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : type(type), _xp(0)
{}

AMateria::AMateria()
{}

AMateria::~AMateria()
{}

AMateria::AMateria(AMateria const &copy) : type(copy.type), _xp(0)
{
    *this = copy;
}

AMateria& AMateria::operator=(AMateria const &amateria)
{
    if (this == &amateria)
        return (*this);

    this->_xp = amateria._xp;
    return (*this);
}   

std::string const & AMateria::getType() const
{
    return (this->type);
}

unsigned int AMateria::getXP() const
{
    return (this->_xp);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
    this->_xp += 10;
}